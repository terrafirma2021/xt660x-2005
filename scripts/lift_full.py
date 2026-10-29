"""Emit complete address-preserving C from the CPU12 raw instruction p-code.

This is a low-level translation, not reconstructed original source or an ECU hardware simulator.
Every instruction is represented; no optimizer removes branches or flag effects.
"""
from pathlib import Path
import json, collections, gzip
R=Path(__file__).resolve().parents[1]; A=R/'analysis'; F=A/'full'; C=F/'c'; C.mkdir(exist_ok=True)
rows=[json.loads(s) for s in (F/'instructions.jsonl').read_text().splitlines()]

HEADER=r'''#ifndef XT660_LIFT_H
#define XT660_LIFT_H
#include <stdint.h>
#include <stddef.h>
/* Big-endian CPU12 register byte locations: A=0, B=1, D=0..1,
   X=16..17, Y=18..19, SP=42..43, CCR=49. */
typedef struct xt_state { uint8_t ram[65536]; uint8_t reg[64]; uint16_t pc; } xt_state;
enum { XT_OK=0, XT_UNDECODED=1, XT_MISSING_BOOT=2, XT_DIVZERO=3 };
int xt_step(xt_state *s);
uint64_t xt_run(xt_state *s, uint64_t budget, int *status);
/* Pure instruction semantics: host supplies RAM/IO state between steps.
   Interrupt delivery, timer progression and external peripherals are not simulated. */
static inline uint64_t xt_mask(unsigned n) { return n==8?UINT64_MAX:((UINT64_C(1)<<(n*8))-1); }
static inline uint64_t xt_read(const uint8_t *p,unsigned n) { uint64_t v=0; for(unsigned i=0;i<n;i++)v=(v<<8)|p[i];return v; }
static inline void xt_write(uint8_t *p,unsigned n,uint64_t v) { for(unsigned i=n;i;i--){p[i-1]=(uint8_t)v;v>>=8;} }
static inline uint64_t xt_load(xt_state *s,uint64_t a,unsigned n) {uint64_t v=0;for(unsigned i=0;i<n;i++)v=(v<<8)|s->ram[(uint16_t)(a+i)];return v;}
static inline void xt_store(xt_state *s,uint64_t a,unsigned n,uint64_t v){for(unsigned i=n;i;i--){s->ram[(uint16_t)(a+i-1)]=(uint8_t)v;v>>=8;}}
static inline uint64_t xt_shl(uint64_t x,uint64_t y,unsigned n){return y>=n*8?0:(x<<y)&xt_mask(n);}
static inline uint64_t xt_shr(uint64_t x,uint64_t y,unsigned n){return y>=n*8?0:x>>y;}
static inline uint64_t xt_sless(uint64_t x,uint64_t y,unsigned n){uint64_t sign=UINT64_C(1)<<(n*8-1);return (x^sign)<(y^sign);}
static inline uint64_t xt_carry(uint64_t x,uint64_t y,unsigned n){return x>xt_mask(n)-y;}
static inline uint64_t xt_scarry(uint64_t x,uint64_t y,unsigned n){return ((~(x^y)&(x^(x+y)))>>(n*8-1))&1;}
static inline uint64_t xt_sborrow(uint64_t x,uint64_t y,unsigned n){return (((x^y)&(x^(x-y)))>>(n*8-1))&1;}
#endif
'''
(C/'xt660_lift.h').write_text(HEADER)

def temp_layout(row):
    spans=sorted({(v['offset'],v['offset']+v['size']) for o in row['pcode'] for v in [o.get('output')]+o['inputs'] if v and v['space']=='unique'})
    merged=[]
    for a,z in spans:
        if merged and a<=merged[-1][1]:merged[-1][1]=max(merged[-1][1],z)
        else:merged.append([a,z])
    offsets={};total=0
    for a,z in merged:
        for pos in range(a,z):offsets[pos]=total+pos-a
        total+=z-a
    return offsets,total

def emit(row):
    offsets,total=temp_layout(row);defined=set(); lines=[f"case 0x{row['address']:04x}: {{ /* {row['bytes']} | {row['assembly']} | {row['function']} */"]
    if total:lines.append(f'uint8_t t[{total}];')
    def read(v):
        space=v['space'];a=v['offset'];n=v['size']
        if space=='const':return f'UINT64_C(0x{a & ((1<<(8*n))-1):x})'
        if space=='unique':
            assert set(range(a,a+n))<=defined,(row['address'],v,'undefined temporary')
            return f'xt_read(t+{offsets[a]},{n})'
        if space=='register':return f'xt_read(s->reg+{a},{n})'
        if space=='RAM':return f'xt_load(s,0x{a:04x},{n})'
        raise ValueError(space)
    def write(v,value):
        space=v['space'];a=v['offset'];n=v['size']
        if space=='unique':defined.update(range(a,a+n));return f'xt_write(t+{offsets[a]},{n},{value});'
        if space=='register':return f'xt_write(s->reg+{a},{n},{value});'
        if space=='RAM':return f'xt_store(s,0x{a:04x},{n},{value});'
        raise ValueError(space)
    binary={'INT_ADD':'+','INT_SUB':'-','INT_MULT':'*','INT_AND':'&','INT_OR':'|','INT_XOR':'^',
            'INT_EQUAL':'==','INT_NOTEQUAL':'!=','INT_LESS':'<','INT_LESSEQUAL':'<='}
    helpers={'INT_SLESS':'xt_sless','INT_CARRY':'xt_carry','INT_SCARRY':'xt_scarry','INT_SBORROW':'xt_sborrow'}
    for o in row['pcode']:
        op=o['op'];ins=o['inputs'];out=o.get('output')
        if op in ('BRANCH','CALL','CBRANCH'):
            assert ins[0]['space']=='RAM'
            target=f"0x{ins[0]['offset']:04x}"
            line=f's->pc={target};return XT_OK;'
            if op=='CBRANCH':line=f'if({read(ins[1])}){{{line}}}'
            lines.append(line);continue
        if op in ('BRANCHIND','CALLIND','RETURN'):
            lines.append(f's->pc=(uint16_t){read(ins[0])};return XT_OK;');continue
        if op=='LOAD':
            assert o['memory_space']=='RAM';lines.append(write(out,f'xt_load(s,{read(ins[1])},{out["size"]})'));continue
        if op=='STORE':
            assert o['memory_space']=='RAM';lines.append(f'xt_store(s,{read(ins[1])},{ins[2]["size"]},{read(ins[2])});');continue
        args=[read(v) for v in ins]
        if op in ('COPY','INT_ZEXT'):expr=args[0]
        elif op in binary:expr=f'({args[0]} {binary[op]} {args[1]})'
        elif op in helpers:expr=f'{helpers[op]}({args[0]},{args[1]},{ins[0]["size"]})'
        elif op=='INT_NEGATE':expr=f'(~{args[0]})'
        elif op=='INT_2COMP':expr=f'(UINT64_C(0)-{args[0]})'
        elif op in ('BOOL_OR','BOOL_XOR'):expr=f'(({args[0]}!=0) {"|" if op=="BOOL_OR" else "^"} ({args[1]}!=0))'
        elif op in ('INT_LEFT','INT_RIGHT'):expr=f'{"xt_shl" if op=="INT_LEFT" else "xt_shr"}({args[0]},{args[1]},{ins[0]["size"]})'
        elif op=='SUBPIECE':expr=f'xt_shr({args[0]},8*{args[1]},{ins[0]["size"]})'
        elif op in ('INT_DIV','INT_REM'):
            lines.append(f'if({args[1]}==0)return XT_DIVZERO;');expr=f'({args[0]} {"/" if op=="INT_DIV" else "%"} {args[1]})'
        else:raise ValueError((row['address'],op))
        lines.append(write(out,expr))
    lines.append(f's->pc=0x{(row["address"]+len(row["bytes"])//2)&65535:04x};return XT_OK;')
    lines.append('}')
    return '\n'.join(lines)

groups=collections.defaultdict(list)
for row in rows:groups[row['address']>>8].append(row)
for page,items in groups.items():
    source='#include "xt660_lift.h"\n'+f'int xt_page_{page:02x}(xt_state *s){{switch(s->pc){{\n'
    source+='\n'.join(emit(row) for row in items)+'\ndefault:return XT_UNDECODED;}}\n'
    (C/f'page_{page:02x}.c').write_text(source)
dispatch='#include "xt660_lift.h"\n'
dispatch+='\n'.join(f'int xt_page_{page:02x}(xt_state *s);' for page in sorted(groups))
dispatch+='\nint xt_step(xt_state *s){switch(s->pc>>8){\n'
dispatch+='\n'.join(f'case 0x{page:02x}:return xt_page_{page:02x}(s);' for page in sorted(groups))
dispatch+='\ndefault:return s->pc>=0xf800?XT_MISSING_BOOT:XT_UNDECODED;}}\n'
dispatch+='uint64_t xt_run(xt_state*s,uint64_t budget,int*status){uint64_t n=0;*status=XT_OK;while(n<budget){*status=xt_step(s);if(*status!=XT_OK)break;n++;}return n;}\n'
(C/'dispatch.c').write_text(dispatch)
ops=collections.Counter(o['op'] for row in rows for o in row['pcode'])
manifest={'instruction_count':len(rows),'instruction_bytes':sum(len(r['bytes'])//2 for r in rows),
          'pcode_operations':sum(ops.values()),'operation_types':dict(ops),'unsupported_operations':[],
          'translation':'Every decoded instruction translated to explicit register, RAM, condition-code, and control-flow effects.',
          'limits':['Not original source','Not validated against physical CPU12 hardware','No cycle, peripheral, or asynchronous interrupt simulation',
                    'Divide-by-zero reports XT_DIVZERO instead of inventing hardware behavior','Unavailable target 0xF8A0 reports XT_MISSING_BOOT']}
(F/'lift_manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
print(json.dumps({k:v for k,v in manifest.items() if k!='operation_types'},indent=2))
