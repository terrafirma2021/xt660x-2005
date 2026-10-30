"""Execute lookup p-code against independently indexed cells for every BIN.

Reuse only the pure interpreter functions from the existing CPU12 test harness;
its native-library loading and primary-image fixtures are not executed here.
"""
import ast,bisect,gzip,json
from decode_firmware_maps import ROOT,OUT,read,save,hx
tree=ast.parse((ROOT/'scripts/test_full_lift.py').read_text())
names={'rd','wr','mask','signed','reference'}
namespace={}
exec(compile(ast.Module(body=[n for n in tree.body if isinstance(n,ast.FunctionDef) and n.name in names],type_ignores=[]),'<CPU12 reference interpreter>','exec'),namespace)
reference=namespace['reference'];wr=namespace['wr'];rd=namespace['rd']
def put(mem,a,v):wr(mem,a,2,v)
def load_code(family):
    p=ROOT/'analysis/full/instructions.jsonl' if family=='early' else OUT/'families/late/full/instructions.jsonl.gz'
    text=gzip.decompress(p.read_bytes()).decode() if p.suffix=='.gz' else p.read_text()
    return {r['address']:r for r in map(json.loads,text.splitlines())}
def run(code,image,pc,setup):
    ram=bytearray(image);reg=bytearray(64);put(reg,42,0x1700);put(ram,0x1700,0x17fe);setup(ram,reg)
    for n in range(2000):
        if pc==0x17fe:return ram,reg
        assert pc in code,hx(pc)
        status,pc=reference(code[pc],ram,reg);assert status==0
    raise AssertionError(('lookup did not return',hx(pc)))
def main():
    registry={e['id']:e for e in read(ROOT/'firmware/registry.json')['images']};codes={f:load_code(f) for f in ('early','late')};results=[]
    for item in read(OUT/'decode_catalog.json')['images']:
        e=registry[item['id']];image=b'\xff'*e['base_address']+(ROOT/e['file']).read_bytes();maps=read(ROOT/item['maps_path']);late=item['family']=='late';code=codes[item['family']];cases=0;tested=[];skipped=[]
        scratch=0xe62 if late else 0xdde
        for m in maps:
            if m['kind']=='2D_step_grid':
                configs={0x4c44:(0xa363,0x900,0x8e8,0xacd),0x4d48:(0xa3b4,0x900,0xc90,0xace),0x35b0:(0xabdd,0x900,0x8e8,0x9ae),0x363c:(0xac2e,0x900,0xc90,0x9af),0x426c:(0x95c4,0x920,0x8f2,0xafd),0x4370:(0x9615,0x920,0xcb2,0xafe),0x36c2:(0x9f1f,0x920,0x8f2,0x9ac),0x374e:(0x9f70,0x920,0xcb2,0x9ad)}
                a=int(m['data_address'],16);pc,ri,ci,dest=configs[a];rt=m['row_axis']['raw_values'];ct=m['column_axis']['raw_values']
                boundaries=lambda v:sorted({0,65535}|{x+d for x in v for d in (-1,0,1) if 0<=x+d<=65535})
                points={(v,ct[len(ct)//2]) for v in boundaries(rt)}|{(rt[len(rt)//2],v) for v in boundaries(ct)}|{(r,c) for r in (0,65535) for c in (0,65535)}
                for synthetic in (False,True):
                    for rv,cv in sorted(points):
                        def setup(ram,reg):
                            put(ram,ri,rv);put(ram,ci,cv)
                            if synthetic:
                                for n in range(m['rows']*m['columns']):ram[a+n]=n%256
                        ram,_=run(code,image,pc,setup);r=bisect.bisect_left(rt,rv);c=bisect.bisect_left(ct,cv)
                        assert ram[dest]==ram[a+r*m['columns']+c],(item['id'],m['id'],rv,cv)
                        cases+=1
                tested.append(m['id']);continue
            b=int(m['pointer_base'],16);kind=m['kind'];width=m['element_bytes'];nr,nc=m['rows'],m['columns'];base=lambda ram,reg:put(reg,16,b)
            if kind=='1D_uniform_axis':
                helper=(0xbbcf if late else 0xc1f2) if m['index_divisor']==65536 else (0xbd1d if late else 0xc386) if width==2 else (0xbbaa if late else 0xc1cd)
                points=[m['input_min_raw']] if width==2 else sorted({0,m['input_min_raw'],m['input_min_raw']+m['input_span_raw']//2,min(65535 if m['index_divisor']==65536 else 255,m['input_min_raw']+m['input_span_raw']),65535 if m['index_divisor']==65536 else 255})
                for v in points:
                    def setup(ram,reg):
                        base(ram,reg)
                        if m['index_divisor']==65536:put(reg,0,v)
                        else:reg[0]=v
                    _,reg=run(code,image,helper,setup)
                    q=max(0,min(m['input_span_raw'],v-m['input_min_raw']))*m['index_factor_raw']
                    if m['index_divisor']==65536:q//=256
                    i,f=divmod(q,256);values=m['raw_values'][0]
                    expected=values[i] if f==0 else (values[i]*256+(values[i+1]-values[i])*f)//256
                    actual=rd(reg,0,2) if width==2 else reg[0]
                    assert actual==expected,(item['id'],m['id'],v,actual,expected)
                    cases+=1
            else:
                helper=(0xbe30 if late else 0xc499) if width==2 else (0xbc69 if late else 0xc28d) if kind=='2D_special_grid' or (not late and m['id'].startswith('timing_speed_')) else (0xbbb8 if late else 0xc1db) if kind in ('1D_precomputed_axis','1D_sensor_conversion') else (0xbcc4 if late else 0xc32d)
                # Cyclic interpolation is identical to direct lookup at integer knots.
                if m['id']=='modulo24_surface' or m['data_address']=='0x18EE':helper=0xbe73 if late else 0xc4dc
                for row in sorted({0,nr//2,nr-1}):
                    for col in sorted({0,nc//2,nc-1}):
                        def setup(ram,reg):
                            base(ram,reg)
                            if helper in (0xc1db,0xbbb8):put(reg,0,col*256)
                            elif width==2:
                                reg[0]=nc;reg[1]=row;ram[0xe93 if late else 0xe06]=col
                                put(ram,0xe95 if late else 0xe08,0);put(ram,0xe97 if late else 0xe0a,0)
                            elif helper in (0xc28d,0xbc69):
                                reg[0]=nr;reg[1]=nc;put(ram,scratch,col*256);put(ram,scratch+2,row*256)
                            else:
                                reg[1]=nc;put(ram,scratch,row*256);put(ram,scratch+2,col*256)
                        _,reg=run(code,image,helper,setup);actual=rd(reg,0,2) if width==2 else reg[0];expected=m['raw_values'][row][col]
                        assert actual==expected,(item['id'],m['id'],row,col,actual,expected)
                        cases+=1
            tested.append(m['id'])
        results.append(dict(id=item['id'],instruction_lookup_cases=cases,maps_executed=len(tested),inline_step_tables_byte_checked_only=skipped))
    report=dict(scope='CPU12 p-code lookup execution at selected knots and uniform clamp/fraction points; not physical ECU or complete caller execution validation',images=results,total_cases=sum(r['instruction_lookup_cases'] for r in results))
    save(OUT/'lookup_validation.json',report);print(json.dumps(report,indent=2))
if __name__=='__main__':main()
