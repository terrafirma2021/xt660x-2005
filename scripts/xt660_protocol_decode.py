"""Passive XT660 firmware protocol decoder. Python 3, no dependencies.

Examples:
  python xt660_protocol_decode.py ecu "13 7c 43 47 19" --mode auth
  python xt660_protocol_decode.py peer "fe 01 ca cb cc cd"
  python xt660_protocol_decode.py response "83 83 9d" --challenge "13 7c 43 47 19"
  python xt660_protocol_decode.py rom "XT660X 2005.bin"

Frame boundaries/direction must come from the capture. This tool never opens
serial ports, transmits commands, edits ROMs, or claims physical pin mapping.
"""
import argparse
import hashlib
import json
from pathlib import Path

SOURCE_SHA256='5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280'
DIAG_NAMES={1:'Throttle angle',3:'Intake pressure',5:'Intake temperature',6:'Coolant temperature',
  7:'Vehicle speed pulse',8:'Lean angle input',9:'Fuel system voltage',20:'Sidestand switch',
  21:'Neutral switch',30:'Ignition coil',36:'Injector',37:'Other variant actuator; not selected here',
  48:'Air induction actuator',50:'Fuel injection relay',51:'Fan relay',52:'Headlight relay',
  57:'Other variant actuator; not selected here',60:'EEPROM fault detail',61:'Fault history',
  62:'Fault history count and erase mode',70:'Program control number'}
REPLIES={0x44:'stage outside completion window',0x45:'successful completion polling',
  0x46:'challenge response mismatch',0x47:'one challenge-response byte buffered',
  0x49:'enrollment byte buffered OR verification/persistence still pending',
  0x4a:'no registered record selected'}

def parse_hex(s):
    for ch in ',:-': s=s.replace(ch,' ')
    s=s.replace('0x','').replace('0X','')
    try: return bytes.fromhex(s)
    except ValueError as e: raise argparse.ArgumentTypeError('Expected hexadecimal bytes') from e

def sum8(payload): return sum(payload)&255
def unpack18(bs):
    if len(bs)!=3: raise ValueError('Exactly three encoded bytes are required')
    return ((bs[0]&63)<<12)|((bs[1]&63)<<6)|(bs[2]&63)

def ecu(frame, mode='normal', diagnostic_id=None):
    if len(frame)!=5: raise ValueError('ECU reply must contain exactly five bytes')
    r={'hex':frame.hex(' '),'checksum_actual':f'{frame[4]:02X}',
       'checksum_expected':f'{sum8(frame[:4]):02X}','checksum_valid':sum8(frame[:4])==frame[4],
       'mode_assumed':mode}
    if mode=='auth':
        if len(set(frame[:4]))==1 and frame[0] in REPLIES: r['meaning']=REPLIES[frame[0]]
        elif frame[:3]==bytes([0,0,0x48]) and frame[3]==0: r['meaning']='startup/session fallback'
        elif frame[:3]==bytes([0,0,0x38]) and frame[3]==0: r['meaning']='sequence error'
        elif frame[0:2]==bytes(2) and frame[3]==0 and 0x33<=frame[2]<=0x37: r['meaning']='echo of authentication error/status class'
        elif frame[2]==0x43:
            a,b,c=frame[0],frame[1],frame[3]
            r.update(meaning='challenge',challenge_bytes=[a,b,c],response_value=a*b+b*c+c*a)
        elif frame[2]==0x4b: r.update(meaning='registered record reply',record_bytes=[frame[0],frame[1],frame[3]])
        else: r['meaning']='unclassified authentication reply'
    else:
        r.update(telemetry_0ae2_raw=frame[0],counter_delta_0ae3_raw=frame[1],
                 status_raw=f'{frame[2]:02X}',status_bit7=bool(frame[2]&128),
                 status_bit6=bool(frame[2]&64),data_byte=frame[3])
        if frame[2]==0x40 and frame[3]==0xff:
            r['data_kind']='invalid-command reply'
        elif mode=='diag':
            if frame[2]&64:
                r.update(data_kind='diagnostic number display phase',diagnostic_number=frame[3],
                         name=DIAG_NAMES.get(frame[3],'unknown'))
            else:
                r.update(data_kind='diagnostic value display phase',diagnostic_number=diagnostic_id,
                         name=DIAG_NAMES.get(diagnostic_id,'supply --diag-id from session context'),raw_value=frame[3])
        else: r['fault_code_low6']=frame[2]&63
        r['note']='Status and display semantics depend on session state; raw values are not calibrated engineering units.'
    return r

def peer(data,mode):
    normal={0:'normal request: reply data 00',1:'normal coolant/display request',2:'normal request: reply data 01',
            0xfe:'startup announcement/handshake byte',0xca:'buttons released/neutral',
            0xcb:'increment, consistent with RESET button',0xcc:'decrement, consistent with SELECT button',
            0xcd:'both buttons/hold-confirm'}
    auth={0x3e:'start/restart authentication challenge',0x3d:'request registration status',0x3f:'poll completion',
          0xfe:'startup fallback',1:'startup fallback',2:'startup fallback',5:'startup fallback'}
    out=[]
    for b in data:
        if mode=='auth' and 0x80<=b<=0xbf: meaning=f'challenge response chunk: six-bit payload {b&63}'
        elif mode=='auth' and 0x40<=b<=0x7f: meaning=f'enrollment chunk: six-bit payload {b&63}'
        elif mode=='auth' and 0x33<=b<=0x37: meaning='error/status class'
        else: meaning=(auth if mode=='auth' else normal).get(b,'not recognized in this mode')
        out.append({'byte':f'{b:02X}','meaning':meaning})
    return {'mode_assumed':mode,'commands':out,'note':'Labels do not establish that a byte is accepted in the current state.'}

def rom_info(path):
    b=Path(path).read_bytes()
    if len(b)!=65536: raise ValueError('Expected a 65536-byte flat image')
    total=sum(int.from_bytes(b[i:i+2],'big') for i in range(0x1800,0xf800,2))&65535
    count=b[0x4ef5]; ids=list(b[0x4ef6:0x4ef6+count])
    variant=b[0x18d3]; skip={11,16} if variant==9 else {8,12}
    result={'sha256':hashlib.sha256(b).hexdigest(),'matches_analyzed_image':hashlib.sha256(b).hexdigest()==SOURCE_SHA256,
       'boot_checksum_range':'1800-F7FF inclusive; big-endian 16-bit additive modulo 65536',
       'checksum_actual':f'{total:04X}','checksum_expected':'AA55','checksum_valid':total==0xaa55,
       'configuration_4e7d':f'{b[0x4e7d]:02X}',
       'application_auth_handler_skipped':b[0x4e7d]==0x80,'top_2k_all_ff':all(v==255 for v in b[0xf800:]),
       'diagnostic_table':ids,'menu_for_variant':[v for i,v in enumerate(ids) if i not in skip],
       'note':'Offsets apply to this analyzed firmware family; a different image requires independent verification.'}
    if b[0x4e7d]==0x80:
        candidate=(total-0x80)&65535
        result['candidate_pre_patch']={'assumption':'Only 4E7D changed from 00 to 80',
            'checksum_if_4e7d_were_00':f'{candidate:04X}','checksum_would_match':candidate==0xaa55,
            'file_modified':False,'note':'Arithmetic hypothesis, not proof of original image provenance.'}
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__,formatter_class=argparse.RawDescriptionHelpFormatter)
    sub=p.add_subparsers(dest='operation',required=True)
    e=sub.add_parser('ecu'); e.add_argument('data',type=parse_hex); e.add_argument('--mode',choices=['normal','diag','auth'],default='normal'); e.add_argument('--diag-id',type=int)
    e=sub.add_parser('peer'); e.add_argument('data',type=parse_hex); e.add_argument('--mode',choices=['normal','diag','auth'],default='normal')
    e=sub.add_parser('response'); e.add_argument('data',type=parse_hex); e.add_argument('--challenge',type=parse_hex,required=True)
    e=sub.add_parser('record'); e.add_argument('data',type=parse_hex)
    e=sub.add_parser('rom'); e.add_argument('path')
    a=p.parse_args()
    try:
        if a.operation=='ecu': result=ecu(a.data,a.mode,a.diag_id)
        elif a.operation=='peer': result=peer(a.data,a.mode)
        elif a.operation=='rom': result=rom_info(a.path)
        elif a.operation=='record':
            if len(a.data)!=11: raise ValueError('Expected nine repeated record bytes and two marker bytes')
            chunks=[a.data[i:i+3] for i in (0,3,6)]
            result={'copies':[v.hex(' ') for v in chunks],'all_copies_equal':chunks[0]==chunks[1]==chunks[2],
                    'marker_valid':a.data[9:]==bytes.fromhex('5a a5'),
                    'note':'External storage record, not a recovered physical transponder secret. Firmware minority-copy handling includes an unusual backward branch; this tool does not emulate it.'}
        else:
            c=ecu(a.challenge,'auth')
            if not c['checksum_valid'] or c.get('meaning')!='challenge': raise ValueError('Expected a valid five-byte challenge frame')
            if len(a.data)!=3 or any(v&0xc0!=0x80 for v in a.data): raise ValueError('Expected three bytes in range 80-BF')
            value=unpack18(a.data)
            result={'received_value':value,'expected_value':c['response_value'],'matches':value==c['response_value'],
                    'note':'Checks captured challenge arithmetic only; does not establish authorization/session completion.'}
    except ValueError as ex: p.error(str(ex))
    print(json.dumps(result,indent=2))

if __name__=='__main__': main()
