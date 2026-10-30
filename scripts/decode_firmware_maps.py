"""Extract each registered BIN's own cells using its verified application family.

Layouts are instruction-backed; matching code does not establish hardware or
physical calibration units. Structural alignment is a research aid, not proof.
"""
import argparse,copy,csv,hashlib,json,math,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'analysis/firmware'
def hx(a):return f'0x{a:04X}'
def digest(b):return hashlib.sha256(b).hexdigest()
def read(path):return json.loads(path.read_text(encoding='utf-8'))
def rows(path):return list(csv.DictReader(path.open(encoding='utf-8'),delimiter='\t'))
def save(path,obj,check=False):
    text=json.dumps(obj,indent=2,ensure_ascii=False)+'\n'
    if check:assert path.read_text(encoding='utf-8')==text,f'Stale {path}'
    else:path.parent.mkdir(parents=True,exist_ok=True);path.write_text(text,encoding='utf-8',newline='\n')
def immediate(s,op):
    m=re.fullmatch(op+r' #0x([0-9a-f]+)',s)
    return int(m[1],16) if m else None

HELPERS={0xbbaa:'uniform8',0xbbcf:'uniform16',0xbbb8:'precomputed',0xbc52:'precomputed_integer',0xbcc4:'grid8',0xbe30:'grid16',0xbe73:'modulo24',0xbc69:'special',0xbd1d:'uniform8_word'}
def late_layouts(image):
    listing=rows(OUT/'families/late/disassembly.tsv');ins={int(r['address'],16):r for r in listing}
    def follow(start):
        q=[(start,0)];seen=set();found=[]
        while q:
            a,depth=q.pop()
            if a in seen or depth>80 or a not in ins:continue
            seen.add(a);r=ins[a];s=r['instruction'];op=s.split()[0]
            if s.startswith('JSR '):
                target=int(s.split('0x')[-1],16) if re.fullmatch(r'JSR 0x[0-9a-f]+',s) else -1
                if target in HELPERS:found.append((a,target))
                continue
            if op in ('RTS','RTI','STOP','WAI','LDX','XGDX','PULX','INX','DEX','ABX','LEAX'):continue
            n=a+len(r['bytes'])//2
            if (op.startswith('B') and op not in ('BSET','BCLR','BITA','BITB')) or op.startswith('LB') or op=='JMP':
                m=re.search(r'0x([0-9a-f]+)$',s)
                if m:q.append((int(m[1],16),depth+1))
                if op in ('BRA','LBRA','JMP'):continue
            q.append((n,depth+1))
        return sorted(set(found))
    loads=[]
    for r in listing:
        ptr=immediate(r['instruction'],'LDX')
        if ptr is not None and ptr<0x4800:
            pc=int(r['address'],16)
            calls=follow(pc+len(r['bytes'])//2)
            if calls:loads.append(dict(base=ptr,load=pc,calls=calls))
    axes={}
    for i,r in enumerate(listing):
        if r['instruction'] not in ('JSR 0xc122','JSR 0xc1c2'):continue
        window=listing[max(0,i-20):i];ptr=count=src=None
        for j,x in enumerate(window):
            s=x['instruction'];v=immediate(s,'LDAA')
            if v is not None:count=v
            if s=='STD 0xbbc' and j:ptr=immediate(window[j-1]['instruction'],'LDD')
            match=re.fullmatch(r'MOVW #0x([0-9a-f]+),0xbbc',s)
            if match:ptr=int(match[1],16)
            if s in ('STD 0xbba','STAA 0xbba') and j:src=window[j-1]['instruction']
        if ptr is None or count is None or not 0x1800<=ptr<0x4800:continue
        width=2 if r['instruction']=='JSR 0xc1c2' else 1
        ax=axes.setdefault(ptr,dict(address=hx(ptr),count=count,element_bytes=width,raw_values=[],calls=[],input=src))
        assert (ax['count'],ax['element_bytes'])==(count,width)
        ax['calls'].append(hx(int(r['address'],16)))
    maps=[]
    def axis(a):return copy.deepcopy(axes[a])
    def add(base,nr,nc,width,name,kind='2D_grid',ra=None,ca=None,offset=3,pcs=None,reference=None):
        found=[dict(pointer_load=hx(x['load']),call=hx(c),helper=hx(h)) for x in loads if x['base']==base for c,h in x['calls']]
        m=dict(id=f'table_{base+offset:04x}',display_name=name,pointer_base=hx(base),data_address=hx(base+offset),end_exclusive=hx(base+offset+nr*nc*width),rows=nr,columns=nc,element_bytes=width,byte_order='big',kind=kind,units='raw ECU values',calls=found,inputs=[],output='See caller instruction evidence',engineering_decode=None,ready_for_tuning_export=False,confidence='Instruction-traced layout; physical units require separate verification')
        if ra is not None:m['row_axis']=axis(ra) if isinstance(ra,int) else ra
        if ca is not None:m['column_axis']=axis(ca) if isinstance(ca,int) else ca
        if pcs:m['evidence_addresses']=[hx(a) for a in pcs]
        if reference:m['related_primary_map']=reference
        maps.append(m);return m
    # Dimensions and axis orientation checked against index scratch writes and helper arguments.
    for b,nr,nc,w,ra,ca,name in [
        (0x18eb,10,13,1,0x18c0,0x18d4,'Injection event-phase target'),
        (0x1b2b,45,30,2,0x1ae6,0x1aaa,'Base fuel quantity — load'),
        (0x264d,45,30,2,0x2608,0x25cc,'Base fuel quantity — throttle'),
        (0x30f5,2,2,1,0x30f4,0x30f0,'Fuel normalization — load input'),
        (0x3101,2,2,1,0x3100,0x30fc,'Fuel normalization — throttle input'),
        (0x31f3,2,2,1,0x31f4,0x31f0,'Fuel normalization gain'),
        (0x313f,13,10,1,0x3128,0x3114,'Fuel normalization offset'),
        (0x3257,8,12,1,0x324a,0x3232,'Load-based fuel correction'),
        (0x38cf,32,20,1,0x3892,0x386a,'Base ignition timing — neutral'),
        (0x3b4f,32,20,1,0x3892,0x386a,'Base ignition timing — normal ratio range'),
        (0x3dcf,32,20,1,0x3892,0x386a,'Base ignition timing — upper ratio range'),
        (0x4081,10,15,1,0x407a,0x406a,'Alternate base ignition timing'),
        (0x4519,12,12,1,0x4504,0x44ec,'Auxiliary control surface — speed and sensor input'),
    ]:add(b,nr,nc,w,name,ra=ra,ca=ca,offset=21 if w==2 else 3)
    for b,nc,ca,name in [
        (0x4455,11,0x445e,'Coolant-indexed target 1'),(0x4477,11,0x4480,'Coolant-indexed target 2'),
        (0x4499,11,0x44a2,'Coolant-indexed target 3'),(0x44bb,11,0x44c4,'Coolant-indexed target 4'),
        (0x45a9,7,0x45b7,'Intake-temperature control target'),(0x3807,17,0x380a,'Runtime correction target'),
        (0x3539,8,0x352c,'Transient correction — speed'),
        (0x34ab,8,0x349e,'Transient response — neutral'),(0x34b3,8,0x349e,'Transient response — normal ratio'),(0x34bb,8,0x349e,'Transient response — upper ratio'),
        (0x34d5,9,0x34c6,'Transient correction — throttle'),
        (0x3681,8,0x3674,'Alternate transient correction — speed'),
        (0x363d,8,0x3630,'Alternate transient response — neutral'),(0x3645,8,0x3630,'Alternate transient response — normal ratio'),(0x364d,8,0x3630,'Alternate transient response — upper ratio'),
        (0x3667,9,0x3658,'Alternate transient correction — throttle'),
    ]:add(b,1,nc,2 if b in (0x4455,0x4477,0x4499,0x44bb,0x45a9,0x3807) else 1,name,kind='1D_stored_axis',ca=ca,offset=21 if b in (0x4455,0x4477,0x4499,0x44bb,0x45a9,0x3807) else 3)
    for x in loads:
        for call,h in x['calls']:
            if h not in (0xbbaa,0xbbcf,0xbd1d) or x['base']<0x1800:continue
            b=x['base']
            if any(m['pointer_base']==hx(b) for m in maps):continue
            wide=h==0xbbcf; size=2 if wide else 1
            vals=[int.from_bytes(image[b+k*size:b+(k+1)*size],'big') for k in range(3)]
            lo,span,factor=vals;den=65536 if wide else 256
            assert factor and span*factor/den<255,(hx(b),vals)
            count=math.ceil(span*factor/den)+1
            m=add(b,1,count,2 if h==0xbd1d else 1,f'Uniform lookup at {hx(b)}','1D_uniform_axis',offset=6 if wide else 3)
            m.update(input_min_raw=lo,input_span_raw=span,index_factor_raw=factor,index_divisor=den)
    def computed(values,source):return dict(raw_values=values,count=len(values),input=source,kind='computed_axis')
    speed=[4096+k*1024 for k in range(11)]+[16384,18432]+[18432+k*4096 for k in range(1,11)]
    for group,bases in [('Load',[0x33bc,0x33d3,0x33ea,0x3401,0x3418,0x342f]),('Throttle',[0x3330,0x3347,0x335e,0x3375,0x338c,0x33a3])]:
        for n,b in enumerate(bases,1):add(b,1,23,1,f'{group} change gain — selection {n}','1D_precomputed_axis',ca=computed(speed,'Selected speed code'),pcs=[0xc2e1])
    add(0x472d,1,29,1,'Speed-based spark correction','1D_precomputed_axis',ca=computed(list(range(4096,61441,2048)),'Speed code'),pcs=[0x7c8f,0x7ca0,0xc2c9])
    add(0x4137,15,9,1,'Ignition dwell — supply and speed','2D_special_grid',ra=computed(list(range(4096,61441,4096)),'Speed code'),ca=computed(list(range(83,212,16)),'Supply code'),pcs=[0x7e3e,0x7e45])
    add(0x4710,1,29,1,'Coolant sensor conversion','1D_sensor_conversion',ca=computed([60+32*k for k in range(29)],'10-bit ADC'),pcs=[0x69a9])
    add(0x46ef,1,33,1,'Intake temperature sensor conversion','1D_sensor_conversion',ca=computed([32*k for k in range(33)],'10-bit ADC'),pcs=[0x68f5])
    for b,ram,n,div,pc,name in [(0x185a,0xe32,21,65536,0x59bf,'Pressure-to-load processing gain'),(0x32c9,0xda1,15,256,0x59d3,'Post-start enrichment — first state'),(0x32db,0xdb3,15,256,0x59e7,'Post-start enrichment — second state')]:
        m=add(b,1,n,1,name,'1D_uniform_axis',offset=6 if div==65536 else 3,pcs=[pc])
        m.update(index_divisor=div,runtime_copy=dict(source=hx(b),destination=hx(ram),bytes=n+(6 if div==65536 else 3)))
        m['calls']=[dict(pointer_load=hx(x['load']),call=hx(c),helper=hx(h)) for x in loads if x['base']==ram for c,h in x['calls']]
    for start,nr,ra,ca,pc,name in [(0x426c,20,0x4244,0x4230,0x95c4,'Air-induction eligibility — throttle'),(0x4370,20,0x4348,0x4334,0x9615,'Air-induction eligibility — load'),(0x36c2,10,0x36ae,0x369a,0x9f1f,'Adaptive feedback eligibility — throttle'),(0x374e,10,0x373a,0x3726,0x9f70,'Adaptive feedback eligibility — load')]:
        row=dict(address=hx(ra),count=nr-1,element_bytes=2,raw_values=[],kind='step_thresholds')
        col=dict(address=hx(ca),count=9,element_bytes=2,raw_values=[],kind='step_thresholds')
        add(start,nr,10,1,name,'2D_step_grid',ra=row,ca=col,offset=0,pcs=[pc])
    names={0x37eb:'Coolant-dependent runtime counter target',0x1890:'Coolant-dependent feedback delay',0x1970:'Startup fuel quantity',0x3857:'Injector supply-voltage compensation',0x19a0:'Startup fuel — pressure multiplier',0x1994:'Startup fuel — throttle multiplier',0x1982:'Startup fuel — speed multiplier',0x3478:'Speed-dependent fuel correction',0x345c:'Transient throttle qualification threshold',0x351e:'Transient pressure correction',0x3501:'Transient intake-temperature multiplier',0x31c6:'Normalization hold duration',0x31da:'Alternate normalization hold duration',0x37d6:'Coolant-dependent feedback delay limit',0x37b6:'Feedback correction limit 1',0x37c4:'Feedback correction limit 2',0x31fa:'Fuel coolant multiplier',0x330d:'Throttle change multiplier',0x331f:'Load change multiplier',0x3216:'Fuel pressure multiplier',0x32ba:'Fuel speed multiplier',0x4057:'Spark coolant correction',0x32ef:'Post-start enrichment decay multiplier',0x34e1:'Transient coolant correction',0x41d4:'Speed-dependent dwell correction'}
    for m in maps:
        b=int(m['pointer_base'],16)
        if b in names:m['display_name']=names[b]
        corrections={0x31fa:'Fuel multiplier vs intake temperature',0x330d:'Positive transient fuel gain vs coolant',0x331f:'Negative transient fuel gain vs coolant',0x32ba:'Throttle-path fuel multiplier vs pressure',0x4057:'Alternate ignition mode — throttle threshold vs coolant',0x32ef:'Coolant fuel enrichment',0x41d4:'Spark timing bound vs pressure',0x37b6:'Adaptive fuel correction — decrement step',0x37c4:'Adaptive fuel correction — increment step'}
        if b in corrections:m['display_name']=corrections[b]
        m['naming_note']='Role names follow local input/output consumers and comparison with the early application; they do not establish physical units.'
        traces=[]
        for call in m['calls']:
            pc=int(call['call'],16);i=next(k for k,r in enumerate(listing) if int(r['address'],16)==pc)
            traces.append(dict(call=call['call'],instructions=[dict(address=hx(int(r['address'],16)),bytes=r['bytes'],instruction=r['instruction']) for r in listing[max(0,i-4):i+5]]))
        m['consumer_traces']=traces
    return maps,axes,loads,ins

def hydrate(m,image):
    m=copy.deepcopy(m);a=int(m['data_address'],16);w=m['element_bytes'];nr,nc=m['rows'],m['columns']
    if m['kind']=='1D_uniform_axis':
        b=int(m['pointer_base'],16);size=2 if m['index_divisor']==65536 else 1
        lo,span,factor=[int.from_bytes(image[b+k*size:b+(k+1)*size],'big') for k in range(3)]
        assert factor>0
        nc=math.ceil(span*factor/m['index_divisor'])+1
        m.update(input_min_raw=lo,input_span_raw=span,index_factor_raw=factor,columns=nc,end_exclusive=hx(a+nr*nc*w))
    z=int(m['end_exclusive'],16);assert a+nr*nc*w==z and 0x1800<=a<z<=0x5000
    values=[int.from_bytes(image[p:p+w],'big') for p in range(a,z,w)]
    m['raw_values']=[values[i*nc:(i+1)*nc] for i in range(nr)]
    m['cells_sha256']=digest(image[a:z])
    for k in ('row_axis','column_axis'):
        ax=m.get(k)
        if ax and ax.get('address'):
            b=int(ax['address'],16);width=ax['element_bytes'];count=ax['count']
            ax['raw_values']=[int.from_bytes(image[p:p+width],'big') for p in range(b,b+width*count,width)]
            ax['ascending']=all(x<=y for x,y in zip(ax['raw_values'],ax['raw_values'][1:]))
    return m

def build(check=False):
    registry=read(ROOT/'firmware/registry.json');primary=read(ROOT/'analysis/maps.json')
    early=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
    late=b'\xff'*0x1800+(ROOT/'firmware/images/xt660-5vk-11.bin').read_bytes()
    late_maps,axes,loads,ins=late_layouts(late)
    save(OUT/'families/late/lookup_calls.json',[dict(pointer_base=hx(x['base']),load=hx(x['load']),calls=[dict(address=hx(a),helper=hx(h),kind=HELPERS[h]) for a,h in x['calls']]) for x in loads],check)
    results=[]
    for entry in registry['images']:
        raw=(ROOT/entry['file']).read_bytes();image=b'\xff'*entry['base_address']+raw
        assert digest(raw)==entry['sha256']
        start=int.from_bytes(image[0xf7a1:0xf7a3],'big');assert image[0xf7a0]==6 and start in (0x4800,0x5000)
        family='early' if start==0x5000 else 'late';reference=early if family=='early' else late
        end=0xf779 if family=='early' else 0xf770
        assert image[start:end]==reference[start:end] and image[0xf7a0:0xf7ee]==reference[0xf7a0:0xf7ee],entry['id']
        maps=[hydrate(m,image) for m in (primary if family=='early' else late_maps)]
        for m in maps:
            m['ready_for_tuning_export']=False
            m['physical_unit_status']='Not independently verified for this BIN; physical references and hardware remain conditional'
        path=OUT/entry['id']/'maps.json';save(path,maps,check)
        results.append(dict(id=entry['id'],sha256=entry['sha256'],family=family,application_entry=hx(start),code_end_exclusive=hx(end),code_sha256=digest(image[start:end]),code_byte_identity_verified=True,map_count=len(maps),cell_count=sum(m['rows']*m['columns'] for m in maps),maps_path=path.relative_to(ROOT).as_posix(),maps_sha256=digest(path.read_bytes()),physical_units_complete=False))
    report=dict(schema_version=1,images=results,scope='Two byte-verified application code families; per-image calibration extraction. Static decompilation is not original-source recovery, hardware testing or physical-unit completion.')
    save(OUT/'decode_catalog.json',report,check)
    print([(i['id'],i['family'],i['map_count'],i['cell_count']) for i in results])
    covered={int(m['pointer_base'],16) for m in late_maps}|{int(m['runtime_copy']['destination'],16) for m in late_maps if m.get('runtime_copy')}
    print('Remaining lookup pointers:',[(hx(x['base']),hx(x['load']),[HELPERS[h] for a,h in x['calls']]) for x in loads if x['base'] not in covered])
    return report
if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--check',action='store_true');build(p.parse_args().check)
