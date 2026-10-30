"""Verify every family's instructions, image applicability, maps and residual data.

All executable-region bytes must be instructions, explicitly identified embedded
data, or uniform FF padding. Scalar/reference inventory does not assert meaning.
"""
import argparse,collections,gzip,json,re
from pathlib import Path
from decode_firmware_maps import ROOT,OUT,read,rows,save,digest,hx

def audit(check=False):
    registry=read(ROOT/'firmware/registry.json');decodes=read(OUT/'decode_catalog.json')
    entries={e['id']:e for e in registry['images']};families={};reports=[]
    for family in ('early','late'):
        folder=ROOT/'analysis' if family=='early' else OUT/'families/late'
        listing=rows(folder/'disassembly.tsv');functions=rows(folder/'functions.tsv')
        packed=folder/'full/instructions.jsonl.gz';plain=folder/'full/instructions.jsonl'
        pcode=[json.loads(l) for l in (gzip.decompress(packed.read_bytes()).decode() if packed.exists() else plain.read_text()).splitlines()]
        assert {int(x['address'],16):x['bytes'] for x in listing}=={x['address']:x['bytes'] for x in pcode}
        coverage=set()
        for ins in listing:
            a=int(ins['address'],16);span=set(range(a,a+len(ins['bytes'])//2))
            assert not span&coverage,(family,hx(a));coverage|=span
        assert not [f for f in functions if f['status']=='failed']
        members=[i for i in decodes['images'] if i['family']==family]
        start=int(members[0]['application_entry'],16);end=int(members[0]['code_end_exclusive'],16)
        families[family]=dict(code_start=hx(start),code_end_exclusive=hx(end),instruction_count=len(listing),instruction_bytes=len(coverage),functions_decompiled=sum(f['status']=='ok' for f in functions),unavailable_targets=[f['entry'] for f in functions if f['status']=='unavailable'],raw_pcode_operations=sum(len(x['pcode']) for x in pcode),members=[m['id'] for m in members],source_sha256=digest((ROOT/'scripts/AnalyzeApplicationFamily.java').read_bytes()) if family=='late' else None,processor_sha256=digest((ROOT/'ghidra/XT660CPU12/data/languages/HCS_HC12.sinc').read_bytes()))
        for item in members:
            e=entries[item['id']];raw=(ROOT/e['file']).read_bytes();image=b'\xff'*e['base_address']+raw
            assert digest(raw)==item['sha256']
            for ins in listing:
                a=int(ins['address'],16);b=bytes.fromhex(ins['bytes']);assert image[a:a+len(b)]==b,(item['id'],hx(a))
            spans=[];a=start
            while a<end:
                if a in coverage:a+=1;continue
                z=a+1
                while z<end and z not in coverage:z+=1
                b=image[a:z]
                known_late={(0x61b6,0x61d6):'ADC handler pointer table; referenced by 0x6136, 0x61D6, 0x61E5',(0xbc32,0xbc44):'Reciprocal/shift lookup constants; referenced by 0x773B'}
                kind='FF padding' if set(b)=={255} else known_late.get((a,z),'Embedded data / separately reviewed primary range' if family=='early' else 'UNRESOLVED')
                assert kind!='UNRESOLVED',(item['id'],hx(a),hx(z))
                spans.append(dict(start=hx(a),end_exclusive=hx(z),bytes=z-a,classification=kind,raw_hex=b.hex() if len(b)<100 else None));a=z
            maps=read(ROOT/item['maps_path']);occupied=set();mapdiff=[]
            refimage=(ROOT/entries[members[0]['id']]['file']).read_bytes();refimage=b'\xff'*entries[members[0]['id']]['base_address']+refimage
            for m in maps:
                a,z=int(m['data_address'],16),int(m['end_exclusive'],16);width=m['element_bytes']
                encoded=b''.join(v.to_bytes(width,'big') for row in m['raw_values'] for v in row)
                assert encoded==image[a:z] and digest(encoded)==m['cells_sha256']
                assert len(m['raw_values'])==m['rows'] and all(len(row)==m['columns'] for row in m['raw_values'])
                assert not occupied&set(range(a,z)),(item['id'],m['id'],'overlapping cells')
                occupied.update(range(a,z))
                delta=sum(x!=y for x,y in zip(encoded,refimage[a:z]))
                if delta:mapdiff.append(dict(id=m['id'],name=m['display_name'],changed_bytes=delta))
                if m['kind']=='1D_uniform_axis':occupied.update(range(int(m['pointer_base'],16),a))
                for k in ('row_axis','column_axis'):
                    ax=m.get(k)
                    if ax and ax.get('address'):
                        b=int(ax['address'],16);w=ax['element_bytes'];enc=b''.join(v.to_bytes(w,'big') for v in ax['raw_values']);assert image[b:b+len(enc)]==enc
                        occupied.update(range(b,b+len(enc)))
            assert occupied<=set(range(0x1800,start)),item['id']
            refs=collections.defaultdict(list)
            # Enumerate every explicit calibration operand; preserve instruction context
            # instead of calling each byte a scalar or guessing its physical meaning.
            for ins in listing:
                for match in re.finditer(r'0x[0-9a-f]+',ins['instruction']):
                    address=int(match[0],16)
                    if 0x1800<=address<start:
                        refs[address].append(dict(pc='0x'+ins['address'].upper(),instruction=ins['instruction'],bytes=ins['bytes']))
            references=[dict(address=hx(a),raw_u8=image[a],raw_u16_be=int.from_bytes(image[a:a+2],'big'),covered_by_map_or_axis=a in occupied,uses=v) for a,v in sorted(refs.items())]
            residual=[];a=0x1800
            while a<start:
                if a in occupied:a+=1;continue
                z=a+1
                while z<start and z not in occupied:z+=1
                residual.append(dict(start=hx(a),end_exclusive=hx(z),bytes=z-a,raw_hex=image[a:z].hex()));a=z
            report=dict(id=item['id'],family=family,sha256=item['sha256'],instruction_bytes_verified=len(coverage),code_noninstruction_ranges=spans,map_count=len(maps),map_cells=item['cell_count'],changed_maps_from_family_reference=mapdiff,family_reference=members[0]['id'],calibration_mapped_bytes=len(occupied),calibration_remaining_bytes=sum(x['bytes'] for x in residual),calibration_remaining_ranges=residual,calibration_references=references,limits=['Raw bytes and static instruction coverage verified; no physical ECU execution test','Calibration residuals contain constants, flags and possibly unidentified structures; all-map completeness is not asserted','Physical scaling and hardware applicability require further evidence'])
            path=OUT/item['id']/'decode_review.json';save(path,report,check)
            reports.append({k:report[k] for k in ('id','family','map_count','map_cells','instruction_bytes_verified','calibration_mapped_bytes','calibration_remaining_bytes')})
    result=dict(schema_version=1,families=families,images=reports)
    save(OUT/'family_verification.json',result,check)
    print(json.dumps(families,indent=2));return result
if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--check',action='store_true');audit(p.parse_args().check)
