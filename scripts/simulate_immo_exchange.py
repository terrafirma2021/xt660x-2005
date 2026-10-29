"""Reproduce ECU-side immobilizer experiments using the repo's CPU12 interpreter.

Usage: python simulate_immo_exchange.py PATH_TO_REPO [--out PATH]
No hardware I/O, firmware writes, or network operations are performed.
"""
import argparse
import ast
import csv
import hashlib
import json
from pathlib import Path

parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('repo',type=Path)
parser.add_argument('--out',type=Path,default=Path(__file__).resolve().parents[1]/'analysis'/'semantics'/'immo_simulation_results.json')
args=parser.parse_args()
rom=(args.repo/'firmware'/'XT660X 2005.bin').read_bytes()
expected_sha='5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280'
assert hashlib.sha256(rom).hexdigest()==expected_sha, 'Unexpected firmware image'
listing=(args.repo/'analysis'/'disassembly.tsv').read_bytes()
rows={int(r['address'],16):r for r in csv.DictReader(listing.decode().splitlines(),delimiter='\t')}
for a,r in rows.items():
    data=bytes.fromhex(r['bytes']); assert rom[a:a+len(data)]==data

# Load only the interpreter class, not the repository script's top-level tests.
helper=(args.repo/'scripts'/'verify_protocol.py').read_bytes()
tree=ast.parse(helper.decode())
cls=next(n for n in tree.body if isinstance(n,ast.ClassDef) and n.name=='CPU')
namespace={'ROM':rom,'ROWS':rows}
exec(compile(ast.Module(body=[cls],type_ignores=[]),'repository_CPU12_class','exec'),namespace)
CPU=namespace['CPU']

class ECU(CPU):
    def __init__(self,seed,record=bytes.fromhex('41 42 43')):
        super().__init__()
        # Candidate pre-patch configuration, in simulated memory only.
        self.m[0x4e7d]=0; self.m[0xdd5]=self.m[0x4e7d]
        self.m[0x45]=seed
        # External storage/boot initialization is represented by a registered
        # record and an initial inhibit flag. It is not hardware-emulated.
        self.m[0xd08]=0x81; self.m[0xd37:0xd3a]=record
        self.m[0x8ae]=0x40; self.m[0x8a0]=0x80
        self.m[0xd3]=0x24
        self.tx=[]
    def put(self,s,v,width=8):
        address=self.addr(s)
        super().put(s,v,width)
        if address==0xd7 and width==8: self.tx.append(v&255)
    def request(self,b):
        assert self.m[0x8ae]&0x40, 'Receiver not ready'
        # Model a received byte without UART error flags.
        self.m[0xd4]=0x20; self.m[0xd5]=0
        self.m[0xd6]=0; self.m[0xd7]=b
        self.run(0xcdc0)
        assert self.m[0xd3]==0x08
        assert self.m[0x8ae]&1, 'Authentication reply not ready'
        self.tx=[]
        # Model both TX status flags as ready on each periodic service call.
        # This exercises the real byte-order/state logic, not line timing.
        self.m[0xd4]=0xc0
        for _ in range(16):
            self.run(0xccb0)
            if not self.m[0x8ae]&1: break
        else: raise AssertionError('Transmitter did not finish')
        assert len(self.tx)==5
        assert self.tx[-1]==sum(self.tx[:4])&255
        assert self.m[0xd3]==0x26 and self.m[0x8ae]&0x40
        return bytes(self.tx)
    def verify_response(self): self.run(0xa9af,stop=0xaa51)
    @property
    def complete(self): return bool(self.m[0xd06]&0x80)

def answer_from_frame(frame):
    """Synthetic peer receives only the transmitted challenge frame."""
    assert len(frame)==5 and frame[2]==0x43
    assert frame[4]==sum(frame[:4])&255
    a,b,c=frame[0],frame[1],frame[3]
    value=a*b+b*c+c*a
    return bytes(0x80|((value>>shift)&63) for shift in (12,6,0))

def transaction(seed,mode='calculated',record=bytes.fromhex('41 42 43'),trace=False):
    ecu=ECU(seed,record); log=[]
    def send(b):
        reply=ecu.request(b)
        if trace: log.append({'peer':f'{b:02X}','ecu':reply.hex(' ').upper(),'complete':ecu.complete})
        return reply
    challenge=send(0x3e)
    response=answer_from_frame(challenge)
    if mode=='fixed': response=bytes.fromhex('83 83 9d')
    if mode=='corrupted': response=response[:-1]+bytes([response[-1]^1])
    if mode!='missing_registration_step': send(0x3d)
    for b in response: send(b)
    ecu.verify_response()
    flags=[]
    for _ in range(4): send(0x3f); flags.append(ecu.complete)
    if mode=='calculated': assert flags==[False,False,False,True]
    return ecu.complete,challenge,response,log

results={'scope':'Registered-record ECU application path with candidate 4E7D=00. Synthetic UART readiness and external record; no physical-key or timing emulation.',
         'firmware_sha256':expected_sha,'interpreter_sha256':hashlib.sha256(helper).hexdigest(),
         'disassembly_sha256':hashlib.sha256(listing).hexdigest(),
         'entry_points':{'receive':'CDC0','transmit':'CCB0','response_check':'A9AF-AA51'},
         'experiments':{},'traces':{}}

ec=ECU(0); ec.d=0xf7ff; ec.run(0xa489)
assert ec.val('0xe66',16)==0xaa55
results['candidate_configuration_checksum']='AA55'

challenges=[]; answers=[]
for mode in ['calculated','fixed','corrupted','missing_registration_step']:
    accepted=[]
    for seed in range(256):
        success,challenge,response,log=transaction(seed,mode,trace=seed in (0,1))
        if success: accepted.append(seed)
        if mode=='calculated': challenges.append(challenge); answers.append(response)
        if log: results['traces'][f'{mode}_seed_{seed}']=log
    results['experiments'][mode]={'cases':256,'accepted':len(accepted),'rejected':256-len(accepted),'accepted_seeds':accepted}
    if mode=='calculated': assert len(accepted)==256
    if mode in ('corrupted','missing_registration_step'): assert not accepted
    print(f'{mode}: {len(accepted)}/256 completed',flush=True)

# Vary the external registration payload without exposing it to the calculator.
records=['00 00 00','12 34 56','a5 5a c3','ff ff ff']
for rec in records:
    for seed in range(256):
        success,*_=transaction(seed,record=bytes.fromhex(rec)); assert success
results['experiments']['record_payload_variation']={'cases':len(records)*256,'accepted':len(records)*256,
    'synthetic_records':records,'assumption':'Registered/valid-record flag is supplied; this does not test registration or real-record validity.'}
print('record payload variation: 1024/1024 completed',flush=True)

# All cross-seed replay pairs through the original arithmetic checker.
# This matrix tests the check itself; the fixed replay above tests full sessions.
matches=[]
for target,challenge in enumerate(challenges):
    a,b,c=challenge[0],challenge[1],challenge[3]
    ecu=CPU(); ecu.m[0xdd5]=0; ecu.m[0xd17:0xd1a]=bytes([a,b,c])
    for original,response in enumerate(answers):
        ecu.m[0xd06]=2; ecu.m[0xd08]=0
        ecu.m[0xd25:0xd28]=response
        ecu.run(0xa9af,stop=0xaa51)
        actual=bool(ecu.m[0xd08]&0x10)
        assert actual==(response==answers[target])
        if actual: matches.append([original,target])
counts=[sum(source==i for source,target in matches) for i in range(256)]
results['experiments']['all_pair_replay_arithmetic_check']={
    'cases':65536,'accepted':len(matches),'rejected':65536-len(matches),
    'cross_seed_acceptances':sum(a!=b for a,b in matches),
    'minimum_seeds_accepting_one_fixed_response':min(counts),
    'maximum_seeds_accepting_one_fixed_response':max(counts),
    'accepting_seed_pairs':matches}
results['challenge_diversity']={'unique_challenges':len(set(challenges)),'unique_responses':len(set(answers))}
print(f'replay matrix: {len(matches)}/65536 accepted; {sum(a!=b for a,b in matches)} cross-seed matches',flush=True)
assert (args.repo/'firmware'/'XT660X 2005.bin').read_bytes()==rom
results['firmware_file_unchanged']=True
args.out.parent.mkdir(parents=True,exist_ok=True)
args.out.write_text(json.dumps(results,indent=2)+'\n',encoding='utf-8')
print(f'Saved {args.out}',flush=True)
