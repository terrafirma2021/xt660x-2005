#include "xt660_lift.h"
int xt_page_e5(xt_state *s){switch(s->pc){
case 0xe500: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe503;return XT_OK;
}
case 0xe503: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe506;return XT_OK;
}
case 0xe506: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe509;return XT_OK;
}
case 0xe509: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
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
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe50b;return XT_OK;
}
case 0xe50b: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
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
s->pc=0xe50d;return XT_OK;
}
case 0xe50d: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe510;return XT_OK;
}
case 0xe510: { /* cc0002 | LDD #0x2 | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x2));
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
s->pc=0xe513;return XT_OK;
}
case 0xe513: { /* fe0c9f | LDX 0xc9f | candidate_unreferenced_e294 */
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
s->pc=0xe516;return XT_OK;
}
case 0xe516: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe518;return XT_OK;
}
case 0xe518: { /* 1810 | IDIV | candidate_unreferenced_e294 */
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
s->pc=0xe51a;return XT_OK;
}
case 0xe51a: { /* 7e0dfa | STX 0xdfa | candidate_unreferenced_e294 */
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
s->pc=0xe51d;return XT_OK;
}
case 0xe51d: { /* 180f | TBA | candidate_unreferenced_e294 */
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
s->pc=0xe51f;return XT_OK;
}
case 0xe51f: { /* f60ca1 | LDAB 0xca1 | candidate_unreferenced_e294 */
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
s->pc=0xe522;return XT_OK;
}
case 0xe522: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe524;return XT_OK;
}
case 0xe524: { /* cc0002 | LDD #0x2 | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x2));
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
s->pc=0xe527;return XT_OK;
}
case 0xe527: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe529;return XT_OK;
}
case 0xe529: { /* 1810 | IDIV | candidate_unreferenced_e294 */
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
s->pc=0xe52b;return XT_OK;
}
case 0xe52b: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe52d;return XT_OK;
}
case 0xe52d: { /* 7b0dfc | STAB 0xdfc | candidate_unreferenced_e294 */
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
s->pc=0xe530;return XT_OK;
}
case 0xe530: { /* f70dfa | TST 0xdfa | candidate_unreferenced_e294 */
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
s->pc=0xe533;return XT_OK;
}
case 0xe533: { /* 2705 | BEQ 0xe53a | candidate_unreferenced_e294 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xe53a;return XT_OK;}
s->pc=0xe535;return XT_OK;
}
case 0xe535: { /* ccffff | LDD #0xffff | candidate_unreferenced_e294 */
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
s->pc=0xe538;return XT_OK;
}
case 0xe538: { /* 2003 | BRA 0xe53d | candidate_unreferenced_e294 */
s->pc=0xe53d;return XT_OK;
s->pc=0xe53a;return XT_OK;
}
case 0xe53a: { /* fc0dfb | LDD 0xdfb | candidate_unreferenced_e294 */
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
s->pc=0xe53d;return XT_OK;
}
case 0xe53d: { /* 7c0c8a | STD 0xc8a | candidate_unreferenced_e294 */
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
s->pc=0xe540;return XT_OK;
}
case 0xe540: { /* 7c0c94 | STD 0xc94 | candidate_unreferenced_e294 */
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
s->pc=0xe543;return XT_OK;
}
case 0xe543: { /* 182004d4 | LBRA 0xea1b | candidate_unreferenced_e294 */
s->pc=0xea1b;return XT_OK;
s->pc=0xe547;return XT_OK;
}
case 0xe547: { /* c103 | CMPB #0x3 | candidate_unreferenced_e294 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x3));
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
s->pc=0xe549;return XT_OK;
}
case 0xe549: { /* 182600d6 | LBNE 0xe623 | candidate_unreferenced_e294 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0xe623;return XT_OK;}
s->pc=0xe54d;return XT_OK;
}
case 0xe54d: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe54e;return XT_OK;
}
case 0xe54e: { /* c7 | CLRB | candidate_unreferenced_e294 */
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
s->pc=0xe54f;return XT_OK;
}
case 0xe54f: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe552;return XT_OK;
}
case 0xe552: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe555;return XT_OK;
}
case 0xe555: { /* f60d94 | LDAB 0xd94 | candidate_unreferenced_e294 */
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
s->pc=0xe558;return XT_OK;
}
case 0xe558: { /* 59 | ASLD | candidate_unreferenced_e294 */
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
s->pc=0xe559;return XT_OK;
}
case 0xe559: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
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
s->pc=0xe55c;return XT_OK;
}
case 0xe55c: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe55e;return XT_OK;
}
case 0xe55e: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
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
s->pc=0xe560;return XT_OK;
}
case 0xe560: { /* 7d0ca0 | STY 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe563;return XT_OK;
}
case 0xe563: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe564;return XT_OK;
}
case 0xe564: { /* f60d8e | LDAB 0xd8e | candidate_unreferenced_e294 */
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
s->pc=0xe567;return XT_OK;
}
case 0xe567: { /* 13 | EMUL | candidate_unreferenced_e294 */
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
s->pc=0xe568;return XT_OK;
}
case 0xe568: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
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
s->pc=0xe56b;return XT_OK;
}
case 0xe56b: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
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
s->pc=0xe56e;return XT_OK;
}
case 0xe56e: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
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
s->pc=0xe571;return XT_OK;
}
case 0xe571: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe574;return XT_OK;
}
case 0xe574: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe575;return XT_OK;
}
case 0xe575: { /* f60d95 | LDAB 0xd95 | candidate_unreferenced_e294 */
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
s->pc=0xe578;return XT_OK;
}
case 0xe578: { /* 59 | ASLD | candidate_unreferenced_e294 */
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
s->pc=0xe579;return XT_OK;
}
case 0xe579: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
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
s->pc=0xe57c;return XT_OK;
}
case 0xe57c: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe57e;return XT_OK;
}
case 0xe57e: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
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
s->pc=0xe580;return XT_OK;
}
case 0xe580: { /* ec00 | LDD 0,IX | candidate_unreferenced_e294 */
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
s->pc=0xe582;return XT_OK;
}
case 0xe582: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe585;return XT_OK;
}
case 0xe585: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe588;return XT_OK;
}
case 0xe588: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe58b;return XT_OK;
}
case 0xe58b: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
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
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe58d;return XT_OK;
}
case 0xe58d: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
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
s->pc=0xe58f;return XT_OK;
}
case 0xe58f: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe592;return XT_OK;
}
case 0xe592: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe593;return XT_OK;
}
case 0xe593: { /* f60d8f | LDAB 0xd8f | candidate_unreferenced_e294 */
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
s->pc=0xe596;return XT_OK;
}
case 0xe596: { /* 13 | EMUL | candidate_unreferenced_e294 */
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
s->pc=0xe597;return XT_OK;
}
case 0xe597: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
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
s->pc=0xe59a;return XT_OK;
}
case 0xe59a: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
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
s->pc=0xe59d;return XT_OK;
}
case 0xe59d: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
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
s->pc=0xe5a0;return XT_OK;
}
case 0xe5a0: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5a3;return XT_OK;
}
case 0xe5a3: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5a6;return XT_OK;
}
case 0xe5a6: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5a9;return XT_OK;
}
case 0xe5a9: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
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
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe5ab;return XT_OK;
}
case 0xe5ab: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
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
s->pc=0xe5ad;return XT_OK;
}
case 0xe5ad: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5b0;return XT_OK;
}
case 0xe5b0: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe5b1;return XT_OK;
}
case 0xe5b1: { /* f60d96 | LDAB 0xd96 | candidate_unreferenced_e294 */
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
s->pc=0xe5b4;return XT_OK;
}
case 0xe5b4: { /* 59 | ASLD | candidate_unreferenced_e294 */
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
s->pc=0xe5b5;return XT_OK;
}
case 0xe5b5: { /* c30c58 | ADDD #0xc58 | candidate_unreferenced_e294 */
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
s->pc=0xe5b8;return XT_OK;
}
case 0xe5b8: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe5ba;return XT_OK;
}
case 0xe5ba: { /* ed00 | LDY 0,IX | candidate_unreferenced_e294 */
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
s->pc=0xe5bc;return XT_OK;
}
case 0xe5bc: { /* ec00 | LDD 0,IX | candidate_unreferenced_e294 */
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
s->pc=0xe5be;return XT_OK;
}
case 0xe5be: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5c1;return XT_OK;
}
case 0xe5c1: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5c4;return XT_OK;
}
case 0xe5c4: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5c7;return XT_OK;
}
case 0xe5c7: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
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
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe5c9;return XT_OK;
}
case 0xe5c9: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
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
s->pc=0xe5cb;return XT_OK;
}
case 0xe5cb: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5ce;return XT_OK;
}
case 0xe5ce: { /* 87 | CLRA | candidate_unreferenced_e294 */
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
s->pc=0xe5cf;return XT_OK;
}
case 0xe5cf: { /* f60d90 | LDAB 0xd90 | candidate_unreferenced_e294 */
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
s->pc=0xe5d2;return XT_OK;
}
case 0xe5d2: { /* 13 | EMUL | candidate_unreferenced_e294 */
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
s->pc=0xe5d3;return XT_OK;
}
case 0xe5d3: { /* 7d0df6 | STY 0xdf6 | candidate_unreferenced_e294 */
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
s->pc=0xe5d6;return XT_OK;
}
case 0xe5d6: { /* 7c0df8 | STD 0xdf8 | candidate_unreferenced_e294 */
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
s->pc=0xe5d9;return XT_OK;
}
case 0xe5d9: { /* fc0df7 | LDD 0xdf7 | candidate_unreferenced_e294 */
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
s->pc=0xe5dc;return XT_OK;
}
case 0xe5dc: { /* f30ca0 | ADDD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5df;return XT_OK;
}
case 0xe5df: { /* 7c0ca0 | STD 0xca0 | candidate_unreferenced_e294 */
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
s->pc=0xe5e2;return XT_OK;
}
case 0xe5e2: { /* fc0c9e | LDD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5e5;return XT_OK;
}
case 0xe5e5: { /* c900 | ADCB #0x0 | candidate_unreferenced_e294 */
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
xt_write(s->reg+1,1,xt_read(t+31,1));
s->pc=0xe5e7;return XT_OK;
}
case 0xe5e7: { /* 8900 | ADCA #0x0 | candidate_unreferenced_e294 */
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
s->pc=0xe5e9;return XT_OK;
}
case 0xe5e9: { /* 7c0c9e | STD 0xc9e | candidate_unreferenced_e294 */
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
s->pc=0xe5ec;return XT_OK;
}
case 0xe5ec: { /* cc0003 | LDD #0x3 | candidate_unreferenced_e294 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x3));
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
s->pc=0xe5ef;return XT_OK;
}
case 0xe5ef: { /* fe0c9f | LDX 0xc9f | candidate_unreferenced_e294 */
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
s->pc=0xe5f2;return XT_OK;
}
case 0xe5f2: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe5f4;return XT_OK;
}
case 0xe5f4: { /* 1810 | IDIV | candidate_unreferenced_e294 */
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
s->pc=0xe5f6;return XT_OK;
}
case 0xe5f6: { /* 7e0dfa | STX 0xdfa | candidate_unreferenced_e294 */
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
s->pc=0xe5f9;return XT_OK;
}
case 0xe5f9: { /* 180f | TBA | candidate_unreferenced_e294 */
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
s->pc=0xe5fb;return XT_OK;
}
case 0xe5fb: { /* f60ca1 | LDAB 0xca1 | candidate_unreferenced_e294 */
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
s->pc=0xe5fe;return XT_OK;
}
case 0xe5fe: { /* b7c5 | XGDX | candidate_unreferenced_e294 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xe600;return XT_OK;
}
default:return XT_UNDECODED;}}
