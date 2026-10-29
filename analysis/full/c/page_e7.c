#include "xt660_lift.h"
int xt_page_e7(xt_state *s){switch(s->pc){
case 0xe701: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe704;return XT_OK;
}
case 0xe704: { /* cc0004 | LDD #0x4 | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x4));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xe707;return XT_OK;
}
case 0xe707: { /* fe0c9f | LDX 0xc9f | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9f));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+16,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe70a;return XT_OK;
}
case 0xe70a: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe70c;return XT_OK;
}
case 0xe70c: { /* 1810 | IDIV | candidate_unreferenced_e294 */
uint8_t t[9];
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+0,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+0,1)));
if(xt_read(s->reg+16,2)==0)return XT_DIVZERO;
xt_write(t+2,2,(xt_read(s->reg+0,2) / xt_read(s->reg+16,2)));
if(xt_read(s->reg+16,2)==0)return XT_DIVZERO;
xt_write(s->reg+0,2,(xt_read(s->reg+0,2) % xt_read(s->reg+16,2)));
xt_write(s->reg+16,2,xt_read(t+2,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+8,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
s->pc=0xe70e;return XT_OK;
}
case 0xe70e: { /* 7e0dfa | STX 0xdfa | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdfa));
xt_write(t+2,2,xt_read(s->reg+16,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe711;return XT_OK;
}
case 0xe711: { /* 180f | TBA | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,1,xt_read(s->reg+1,1));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xe713;return XT_OK;
}
case 0xe713: { /* f60ca1 | LDAB 0xca1 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xca1));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe716;return XT_OK;
}
case 0xe716: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe718;return XT_OK;
}
case 0xe718: { /* cc0004 | LDD #0x4 | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x4));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xe71b;return XT_OK;
}
case 0xe71b: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe71d;return XT_OK;
}
case 0xe71d: { /* 1810 | IDIV | candidate_unreferenced_e294 */
uint8_t t[9];
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+0,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+0,1)));
if(xt_read(s->reg+16,2)==0)return XT_DIVZERO;
xt_write(t+2,2,(xt_read(s->reg+0,2) / xt_read(s->reg+16,2)));
if(xt_read(s->reg+16,2)==0)return XT_DIVZERO;
xt_write(s->reg+0,2,(xt_read(s->reg+0,2) % xt_read(s->reg+16,2)));
xt_write(s->reg+16,2,xt_read(t+2,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+8,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
s->pc=0xe71f;return XT_OK;
}
case 0xe71f: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe721;return XT_OK;
}
case 0xe721: { /* 7b0dfc | STAB 0xdfc | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xdfc));
xt_write(t+2,1,xt_read(s->reg+1,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe724;return XT_OK;
}
case 0xe724: { /* f70dfa | TST 0xdfa | candidate_unreferenced_e294 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xdfa));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | UINT64_C(0x0)));
s->pc=0xe727;return XT_OK;
}
case 0xe727: { /* 2705 | BEQ 0xe72e | candidate_unreferenced_e294 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xe72e;return XT_OK;}
s->pc=0xe729;return XT_OK;
}
case 0xe729: { /* ccffff | LDD #0xffff | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0xffff));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xe72c;return XT_OK;
}
case 0xe72c: { /* 2003 | BRA 0xe731 | candidate_unreferenced_e294 */
s->pc=0xe731;return XT_OK;
s->pc=0xe72e;return XT_OK;
}
case 0xe72e: { /* fc0dfb | LDD 0xdfb | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdfb));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe731;return XT_OK;
}
case 0xe731: { /* 7c0c8a | STD 0xc8a | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc8a));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe734;return XT_OK;
}
case 0xe734: { /* 7c0c94 | STD 0xc94 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc94));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe737;return XT_OK;
}
case 0xe737: { /* 182002e0 | LBRA 0xea1b | candidate_unreferenced_e294 */
s->pc=0xea1b;return XT_OK;
s->pc=0xe73b;return XT_OK;
}
case 0xe73b: { /* c105 | CMPB #0x5 | candidate_unreferenced_e294 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x5));
xt_write(t+4,1,(xt_read(s->reg+1,1) - xt_read(t+3,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(t+4,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,(xt_read(t+4,1) == UINT64_C(0x0)));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+1,1),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+11,1,(xt_read(s->reg+1,1) < xt_read(t+3,1)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+11,1)));
s->pc=0xe73d;return XT_OK;
}
case 0xe73d: { /* 1826014e | LBNE 0xe88f | candidate_unreferenced_e294 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0xe88f;return XT_OK;}
s->pc=0xe741;return XT_OK;
}
case 0xe741: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe742;return XT_OK;
}
case 0xe742: { /* c7 | CLRB | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+1,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe743;return XT_OK;
}
case 0xe743: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe746;return XT_OK;
}
case 0xe746: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe749;return XT_OK;
}
case 0xe749: { /* f60d94 | LDAB 0xd94 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd94));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe74c;return XT_OK;
}
case 0xe74c: { /* 59 | ASLD | candidate_unreferenced_e294 */
uint8_t t[16];
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+6,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0xf),2));
xt_write(t+8,1,xt_shr(xt_read(t+6,2),8*UINT64_C(0x0),2));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+0,2,xt_shl(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe74d;return XT_OK;
}
case 0xe74d: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0xc58));
xt_write(t+13,2,(xt_read(s->reg+0,2) + xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+0,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+3,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+6,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0xe750;return XT_OK;
}
case 0xe750: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe752;return XT_OK;
}
case 0xe752: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+18,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe754;return XT_OK;
}
case 0xe754: { /* 7d0ca0 | STY 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+18,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe757;return XT_OK;
}
case 0xe757: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe758;return XT_OK;
}
case 0xe758: { /* f60d8e | LDAB 0xd8e | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd8e));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe75b;return XT_OK;
}
case 0xe75b: { /* 13 | EMUL | candidate_unreferenced_e294 */
uint8_t t[29];
xt_write(t+0,4,xt_read(s->reg+0,2));
xt_write(t+4,4,xt_read(s->reg+18,2));
xt_write(t+8,4,(xt_read(t+0,4) * xt_read(t+4,4)));
xt_write(s->reg+18,2,xt_shr(xt_read(t+8,4),8*UINT64_C(0x2),4));
xt_write(s->reg+0,2,xt_read(t+10,2));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+12,4,xt_shr(xt_read(t+8,4),UINT64_C(0x1f),4));
xt_write(t+16,1,xt_shr(xt_read(t+12,4),8*UINT64_C(0x0),4));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+19,1,(xt_read(t+8,4) == UINT64_C(0x0)));
xt_write(t+21,1,xt_shl(xt_read(t+19,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+21,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+22,4,xt_shr(xt_read(t+8,4),UINT64_C(0xf),4));
xt_write(t+26,1,xt_shr(xt_read(t+22,4),8*UINT64_C(0x0),4));
xt_write(t+27,1,(xt_read(t+26,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+27,1)));
s->pc=0xe75c;return XT_OK;
}
case 0xe75c: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf6));
xt_write(t+2,2,xt_read(s->reg+18,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe75f;return XT_OK;
}
case 0xe75f: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf8));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe762;return XT_OK;
}
case 0xe762: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf7));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe765;return XT_OK;
}
case 0xe765: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe768;return XT_OK;
}
case 0xe768: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe769;return XT_OK;
}
case 0xe769: { /* f60d95 | LDAB 0xd95 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd95));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe76c;return XT_OK;
}
case 0xe76c: { /* 59 | ASLD | candidate_unreferenced_e294 */
uint8_t t[16];
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+6,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0xf),2));
xt_write(t+8,1,xt_shr(xt_read(t+6,2),8*UINT64_C(0x0),2));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+0,2,xt_shl(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe76d;return XT_OK;
}
case 0xe76d: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0xc58));
xt_write(t+13,2,(xt_read(s->reg+0,2) + xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+0,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+3,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+6,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0xe770;return XT_OK;
}
case 0xe770: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe772;return XT_OK;
}
case 0xe772: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+18,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe774;return XT_OK;
}
case 0xe774: { /* ec00 | LDD 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+0,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe776;return XT_OK;
}
case 0xe776: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) + xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+10,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0xe779;return XT_OK;
}
case 0xe779: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe77c;return XT_OK;
}
case 0xe77c: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe77f;return XT_OK;
}
case 0xe77f: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+1,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe781;return XT_OK;
}
case 0xe781: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+0,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+0,1,xt_read(t+31,1));
s->pc=0xe783;return XT_OK;
}
case 0xe783: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe786;return XT_OK;
}
case 0xe786: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe787;return XT_OK;
}
case 0xe787: { /* f60d8f | LDAB 0xd8f | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd8f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe78a;return XT_OK;
}
case 0xe78a: { /* 13 | EMUL | candidate_unreferenced_e294 */
uint8_t t[29];
xt_write(t+0,4,xt_read(s->reg+0,2));
xt_write(t+4,4,xt_read(s->reg+18,2));
xt_write(t+8,4,(xt_read(t+0,4) * xt_read(t+4,4)));
xt_write(s->reg+18,2,xt_shr(xt_read(t+8,4),8*UINT64_C(0x2),4));
xt_write(s->reg+0,2,xt_read(t+10,2));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+12,4,xt_shr(xt_read(t+8,4),UINT64_C(0x1f),4));
xt_write(t+16,1,xt_shr(xt_read(t+12,4),8*UINT64_C(0x0),4));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+19,1,(xt_read(t+8,4) == UINT64_C(0x0)));
xt_write(t+21,1,xt_shl(xt_read(t+19,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+21,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+22,4,xt_shr(xt_read(t+8,4),UINT64_C(0xf),4));
xt_write(t+26,1,xt_shr(xt_read(t+22,4),8*UINT64_C(0x0),4));
xt_write(t+27,1,(xt_read(t+26,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+27,1)));
s->pc=0xe78b;return XT_OK;
}
case 0xe78b: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf6));
xt_write(t+2,2,xt_read(s->reg+18,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe78e;return XT_OK;
}
case 0xe78e: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf8));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe791;return XT_OK;
}
case 0xe791: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf7));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe794;return XT_OK;
}
case 0xe794: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) + xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+10,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0xe797;return XT_OK;
}
case 0xe797: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe79a;return XT_OK;
}
case 0xe79a: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe79d;return XT_OK;
}
case 0xe79d: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+1,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe79f;return XT_OK;
}
case 0xe79f: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+0,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+0,1,xt_read(t+31,1));
s->pc=0xe7a1;return XT_OK;
}
case 0xe7a1: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7a4;return XT_OK;
}
case 0xe7a4: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe7a5;return XT_OK;
}
case 0xe7a5: { /* f60d96 | LDAB 0xd96 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd96));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe7a8;return XT_OK;
}
case 0xe7a8: { /* 59 | ASLD | candidate_unreferenced_e294 */
uint8_t t[16];
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+6,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0xf),2));
xt_write(t+8,1,xt_shr(xt_read(t+6,2),8*UINT64_C(0x0),2));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+0,2,xt_shl(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7a9;return XT_OK;
}
case 0xe7a9: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0xc58));
xt_write(t+13,2,(xt_read(s->reg+0,2) + xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+0,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+3,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+6,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0xe7ac;return XT_OK;
}
case 0xe7ac: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe7ae;return XT_OK;
}
case 0xe7ae: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+18,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe7b0;return XT_OK;
}
case 0xe7b0: { /* ec00 | LDD 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+0,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe7b2;return XT_OK;
}
case 0xe7b2: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) + xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+10,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0xe7b5;return XT_OK;
}
case 0xe7b5: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7b8;return XT_OK;
}
case 0xe7b8: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7bb;return XT_OK;
}
case 0xe7bb: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+1,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe7bd;return XT_OK;
}
case 0xe7bd: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+0,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+0,1,xt_read(t+31,1));
s->pc=0xe7bf;return XT_OK;
}
case 0xe7bf: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7c2;return XT_OK;
}
case 0xe7c2: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe7c3;return XT_OK;
}
case 0xe7c3: { /* f60d90 | LDAB 0xd90 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd90));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe7c6;return XT_OK;
}
case 0xe7c6: { /* 13 | EMUL | candidate_unreferenced_e294 */
uint8_t t[29];
xt_write(t+0,4,xt_read(s->reg+0,2));
xt_write(t+4,4,xt_read(s->reg+18,2));
xt_write(t+8,4,(xt_read(t+0,4) * xt_read(t+4,4)));
xt_write(s->reg+18,2,xt_shr(xt_read(t+8,4),8*UINT64_C(0x2),4));
xt_write(s->reg+0,2,xt_read(t+10,2));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+12,4,xt_shr(xt_read(t+8,4),UINT64_C(0x1f),4));
xt_write(t+16,1,xt_shr(xt_read(t+12,4),8*UINT64_C(0x0),4));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+19,1,(xt_read(t+8,4) == UINT64_C(0x0)));
xt_write(t+21,1,xt_shl(xt_read(t+19,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+21,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+22,4,xt_shr(xt_read(t+8,4),UINT64_C(0xf),4));
xt_write(t+26,1,xt_shr(xt_read(t+22,4),8*UINT64_C(0x0),4));
xt_write(t+27,1,(xt_read(t+26,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+27,1)));
s->pc=0xe7c7;return XT_OK;
}
case 0xe7c7: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf6));
xt_write(t+2,2,xt_read(s->reg+18,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7ca;return XT_OK;
}
case 0xe7ca: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf8));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7cd;return XT_OK;
}
case 0xe7cd: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdf7));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7d0;return XT_OK;
}
case 0xe7d0: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) + xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+10,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0xe7d3;return XT_OK;
}
case 0xe7d3: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7d6;return XT_OK;
}
case 0xe7d6: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7d9;return XT_OK;
}
case 0xe7d9: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+1,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe7db;return XT_OK;
}
case 0xe7db: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+0,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+0,1,xt_read(t+31,1));
s->pc=0xe7dd;return XT_OK;
}
case 0xe7dd: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7e0;return XT_OK;
}
case 0xe7e0: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe7e1;return XT_OK;
}
case 0xe7e1: { /* f60d97 | LDAB 0xd97 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd97));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe7e4;return XT_OK;
}
case 0xe7e4: { /* 59 | ASLD | candidate_unreferenced_e294 */
uint8_t t[16];
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+6,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0xf),2));
xt_write(t+8,1,xt_shr(xt_read(t+6,2),8*UINT64_C(0x0),2));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+0,2,xt_shl(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7e5;return XT_OK;
}
case 0xe7e5: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0xc58));
xt_write(t+13,2,(xt_read(s->reg+0,2) + xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+0,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+3,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+6,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0xe7e8;return XT_OK;
}
case 0xe7e8: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe7ea;return XT_OK;
}
case 0xe7ea: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+18,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe7ec;return XT_OK;
}
case 0xe7ec: { /* ec00 | LDD 0,IX | candidate_unreferenced_e294 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+0,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0xe7ee;return XT_OK;
}
case 0xe7ee: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) + xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+10,1,xt_scarry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,xt_carry(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0xe7f1;return XT_OK;
}
case 0xe7f1: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xca0));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7f4;return XT_OK;
}
case 0xe7f4: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(s->reg+0,2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7f7;return XT_OK;
}
case 0xe7f7: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+1,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe7f9;return XT_OK;
}
case 0xe7f9: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
uint8_t t[32];
xt_write(t+30,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+2,1,xt_shr(xt_read(t+1,1),UINT64_C(0x4),1));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+3,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+30,1) & xt_read(t+2,1)));
xt_write(t+5,1,(xt_read(t+3,1) + xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(t+5,1) + xt_read(t+0,1)));
xt_write(t+7,1,(xt_read(t+2,1) + UINT64_C(0x1)));
xt_write(t+8,1,(xt_read(t+6,1) & xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(t+8,1) != UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+13,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+12,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(s->reg+49,1,(xt_read(t+13,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+0,1) + xt_read(t+30,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+16,1,xt_carry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+17,1,((xt_read(t+15,1)!=0) | (xt_read(t+16,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+22,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+19,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+30,1),1));
xt_write(t+20,1,xt_scarry(xt_read(t+14,1),xt_read(t+0,1),1));
xt_write(t+21,1,((xt_read(t+19,1)!=0) ^ (xt_read(t+20,1)!=0)));
xt_write(t+23,1,xt_shl(xt_read(t+21,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+22,1) | xt_read(t+23,1)));
xt_write(t+31,1,(xt_read(t+14,1) + xt_read(t+0,1)));
xt_write(t+25,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+24,1,xt_sless(xt_read(t+31,1),UINT64_C(0x0),1));
xt_write(t+26,1,xt_shl(xt_read(t+24,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+25,1) | xt_read(t+26,1)));
xt_write(t+28,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+27,1,(xt_read(t+31,1) == UINT64_C(0x0)));
xt_write(t+29,1,xt_shl(xt_read(t+27,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+28,1) | xt_read(t+29,1)));
xt_write(s->reg+0,1,xt_read(t+31,1));
s->pc=0xe7fb;return XT_OK;
}
case 0xe7fb: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xc9e));
xt_write(t+2,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(t+0,2),2,xt_read(t+2,2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+0,2),UINT64_C(0x0),2));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+5,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0xe7fe;return XT_OK;
}
case 0xe7fe: { /* 87 | CLRA | candidate_unreferenced_e294 */
uint8_t t[7];
xt_write(s->reg+0,1,UINT64_C(0x0));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+6,1) | UINT64_C(0x0)));
s->pc=0xe7ff;return XT_OK;
}
case 0xe7ff: { /* f60d91 | LDAB 0xd91 | candidate_unreferenced_e294 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd91));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0xe802;return XT_OK;
}
default:return XT_UNDECODED;}}
