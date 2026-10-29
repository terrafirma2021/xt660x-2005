#include "xt660_lift.h"
int xt_page_85(xt_state *s){switch(s->pc){
case 0x8501: { /* fc094c | LDD 0x94c | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x94c));
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
s->pc=0x8504;return XT_OK;
}
case 0x8504: { /* 13 | EMUL | FUN_74b8 */
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
s->pc=0x8505;return XT_OK;
}
case 0x8505: { /* c30080 | ADDD #0x80 | FUN_74b8 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0x80));
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
s->pc=0x8508;return XT_OK;
}
case 0x8508: { /* b7c6 | XGDY | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x850a;return XT_OK;
}
case 0x850a: { /* c900 | ADCB #0x0 | FUN_74b8 */
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
s->pc=0x850c;return XT_OK;
}
case 0x850c: { /* 8900 | ADCA #0x0 | FUN_74b8 */
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
s->pc=0x850e;return XT_OK;
}
case 0x850e: { /* 8c0100 | CPD #0x100 | FUN_74b8 */
uint8_t t[15];
xt_write(t+3,2,UINT64_C(0x100));
xt_write(t+5,2,(xt_read(s->reg+0,2) - xt_read(t+3,2)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+5,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+5,2),UINT64_C(0x0),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+3,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+3,2),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8511;return XT_OK;
}
case 0x8511: { /* 2450 | BCC 0x8563 | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8563;return XT_OK;}
s->pc=0x8513;return XT_OK;
}
case 0x8513: { /* 7b0dde | STAB 0xdde | FUN_74b8 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8516;return XT_OK;
}
case 0x8516: { /* 7d0ddf | STY 0xddf | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xddf));
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
s->pc=0x8519;return XT_OK;
}
case 0x8519: { /* fc0dde | LDD 0xdde | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x851c;return XT_OK;
}
case 0x851c: { /* bc19dc | CPD 0x19dc | FUN_74b8 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x19dc));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+7,2,xt_read(t+2,2));
xt_write(t+9,2,(xt_read(s->reg+0,2) - xt_read(t+7,2)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+9,2) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+14,1,xt_sless(xt_read(t+9,2),UINT64_C(0x0),2));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+17,1,(xt_read(s->reg+0,2) < xt_read(t+7,2)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+7,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
s->pc=0x851f;return XT_OK;
}
case 0x851f: { /* 2505 | BCS 0x8526 | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8526;return XT_OK;}
s->pc=0x8521;return XT_OK;
}
case 0x8521: { /* fc19dc | LDD 0x19dc | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x19dc));
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
s->pc=0x8524;return XT_OK;
}
case 0x8524: { /* 2008 | BRA 0x852e | FUN_74b8 */
s->pc=0x852e;return XT_OK;
s->pc=0x8526;return XT_OK;
}
case 0x8526: { /* bc19da | CPD 0x19da | FUN_74b8 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x19da));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+7,2,xt_read(t+2,2));
xt_write(t+9,2,(xt_read(s->reg+0,2) - xt_read(t+7,2)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+9,2) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+14,1,xt_sless(xt_read(t+9,2),UINT64_C(0x0),2));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(t+18,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+17,1,(xt_read(s->reg+0,2) < xt_read(t+7,2)));
xt_write(s->reg+49,1,(xt_read(t+18,1) | xt_read(t+17,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+7,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
s->pc=0x8529;return XT_OK;
}
case 0x8529: { /* 2403 | BCC 0x852e | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x852e;return XT_OK;}
s->pc=0x852b;return XT_OK;
}
case 0x852b: { /* fc19da | LDD 0x19da | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x19da));
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
s->pc=0x852e;return XT_OK;
}
case 0x852e: { /* 7c095a | STD 0x95a | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x95a));
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
s->pc=0x8531;return XT_OK;
}
case 0x8531: { /* 1e0ca80125 | BRSET 0xca8,0x1,0x855b | FUN_74b8 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0xca8));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x855b;return XT_OK;}
s->pc=0x8536;return XT_OK;
}
case 0x8536: { /* b7c6 | XGDY | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8538;return XT_OK;
}
case 0x8538: { /* 87 | CLRA | FUN_74b8 */
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
s->pc=0x8539;return XT_OK;
}
case 0x8539: { /* f619d4 | LDAB 0x19d4 | FUN_74b8 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x19d4));
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
s->pc=0x853c;return XT_OK;
}
case 0x853c: { /* 59 | ASLD | FUN_74b8 */
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
s->pc=0x853d;return XT_OK;
}
case 0x853d: { /* 59 | ASLD | FUN_74b8 */
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
s->pc=0x853e;return XT_OK;
}
case 0x853e: { /* 13 | EMUL | FUN_74b8 */
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
s->pc=0x853f;return XT_OK;
}
case 0x853f: { /* c30080 | ADDD #0x80 | FUN_74b8 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0x80));
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
s->pc=0x8542;return XT_OK;
}
case 0x8542: { /* b7c6 | XGDY | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8544;return XT_OK;
}
case 0x8544: { /* c900 | ADCB #0x0 | FUN_74b8 */
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
s->pc=0x8546;return XT_OK;
}
case 0x8546: { /* 8900 | ADCA #0x0 | FUN_74b8 */
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
s->pc=0x8548;return XT_OK;
}
case 0x8548: { /* 8c0100 | CPD #0x100 | FUN_74b8 */
uint8_t t[15];
xt_write(t+3,2,UINT64_C(0x100));
xt_write(t+5,2,(xt_read(s->reg+0,2) - xt_read(t+3,2)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+5,2) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+5,2),UINT64_C(0x0),2));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+3,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+3,2),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x854b;return XT_OK;
}
case 0x854b: { /* 240b | BCC 0x8558 | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8558;return XT_OK;}
s->pc=0x854d;return XT_OK;
}
case 0x854d: { /* 7b0dde | STAB 0xdde | FUN_74b8 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8550;return XT_OK;
}
case 0x8550: { /* 7d0ddf | STY 0xddf | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xddf));
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
s->pc=0x8553;return XT_OK;
}
case 0x8553: { /* fc0dde | LDD 0xdde | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8556;return XT_OK;
}
case 0x8556: { /* 2003 | BRA 0x855b | FUN_74b8 */
s->pc=0x855b;return XT_OK;
s->pc=0x8558;return XT_OK;
}
case 0x8558: { /* ccffff | LDD #0xffff | FUN_74b8 */
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
s->pc=0x855b;return XT_OK;
}
case 0x855b: { /* 7c094a | STD 0x94a | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x94a));
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
s->pc=0x855e;return XT_OK;
}
case 0x855e: { /* f3095e | ADDD 0x95e | FUN_74b8 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x95e));
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
s->pc=0x8561;return XT_OK;
}
case 0x8561: { /* 2403 | BCC 0x8566 | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8566;return XT_OK;}
s->pc=0x8563;return XT_OK;
}
case 0x8563: { /* ccffff | LDD #0xffff | FUN_74b8 */
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
s->pc=0x8566;return XT_OK;
}
case 0x8566: { /* 7c092c | STD 0x92c | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x92c));
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
s->pc=0x8569;return XT_OK;
}
case 0x8569: { /* 7c0946 | STD 0x946 | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x946));
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
s->pc=0x856c;return XT_OK;
}
case 0x856c: { /* 1c088140 | BSET 0x881,0x40 | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x881));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x40)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+6,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+9,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x8570;return XT_OK;
}
case 0x8570: { /* 1c0a1608 | BSET 0xa16,0x8 | FUN_74b8 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa16));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x8)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+6,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+9,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x8574;return XT_OK;
}
case 0x8574: { /* 1d0a1602 | BCLR 0xa16,0x2 | FUN_74b8 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xa16));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x2)));
xt_write(t+5,1,(xt_read(t+5,1) & xt_read(t+6,1)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x8578;return XT_OK;
}
case 0x8578: { /* 1d08bc40 | BCLR 0x8bc,0x40 | FUN_74b8 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8bc));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x40)));
xt_write(t+5,1,(xt_read(t+5,1) & xt_read(t+6,1)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x857c;return XT_OK;
}
case 0x857c: { /* 3d | RTS | FUN_74b8 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x857d;return XT_OK;
}
case 0x857d: { /* 1e088b4009 | BRSET 0x88b,0x40,0x858b | FUN_857d */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x40)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x858b;return XT_OK;}
s->pc=0x8582;return XT_OK;
}
case 0x8582: { /* 1f088b806d | BRCLR 0x88b,0x80,0x85f4 | FUN_857d */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x80)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x85f4;return XT_OK;}
s->pc=0x8587;return XT_OK;
}
case 0x8587: { /* 18200097 | LBRA 0x8622 | FUN_857d */
s->pc=0x8622;return XT_OK;
s->pc=0x858b;return XT_OK;
}
case 0x858b: { /* 1d088b40 | BCLR 0x88b,0x40 | FUN_857d */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x40)));
xt_write(t+5,1,(xt_read(t+5,1) & xt_read(t+6,1)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x858f;return XT_OK;
}
case 0x858f: { /* 1f0ca8012e | BRCLR 0xca8,0x1,0x85c2 | FUN_857d */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0xca8));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x1)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x85c2;return XT_OK;}
s->pc=0x8594;return XT_OK;
}
case 0x8594: { /* 1e08811029 | BRSET 0x881,0x10,0x85c2 | FUN_857d */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x881));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x10)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x85c2;return XT_OK;}
s->pc=0x8599;return XT_OK;
}
case 0x8599: { /* 1e088b8022 | BRSET 0x88b,0x80,0x85c0 | FUN_857d */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x80)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x85c0;return XT_OK;}
s->pc=0x859e;return XT_OK;
}
case 0x859e: { /* 1c088b80 | BSET 0x88b,0x80 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x80)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+6,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+9,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85a2;return XT_OK;
}
case 0x85a2: { /* 16ec98 | JSR 0xec98 | FUN_857d */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xec98));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x85a5));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x85a5;return XT_OK;
}
case 0x85a5: { /* fc0a26 | LDD 0xa26 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa26));
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
s->pc=0x85a8;return XT_OK;
}
case 0x85a8: { /* 7c0a22 | STD 0xa22 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa22));
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
s->pc=0x85ab;return XT_OK;
}
case 0x85ab: { /* f60a1e | LDAB 0xa1e | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1e));
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
s->pc=0x85ae;return XT_OK;
}
case 0x85ae: { /* 7b0a1c | STAB 0xa1c | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1c));
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
s->pc=0x85b1;return XT_OK;
}
case 0x85b1: { /* 16ed11 | JSR 0xed11 | FUN_857d */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xed11));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x85b4));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x85b4;return XT_OK;
}
case 0x85b4: { /* fc0a28 | LDD 0xa28 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa28));
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
s->pc=0x85b7;return XT_OK;
}
case 0x85b7: { /* 7c0a24 | STD 0xa24 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa24));
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
s->pc=0x85ba;return XT_OK;
}
case 0x85ba: { /* f60a1f | LDAB 0xa1f | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1f));
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
s->pc=0x85bd;return XT_OK;
}
case 0x85bd: { /* 7b0a1d | STAB 0xa1d | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1d));
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
s->pc=0x85c0;return XT_OK;
}
case 0x85c0: { /* 2060 | BRA 0x8622 | FUN_857d */
s->pc=0x8622;return XT_OK;
s->pc=0x85c2;return XT_OK;
}
case 0x85c2: { /* 1f088b802d | BRCLR 0x88b,0x80,0x85f4 | FUN_857d */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x80)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x85f4;return XT_OK;}
s->pc=0x85c7;return XT_OK;
}
case 0x85c7: { /* 1d088b80 | BCLR 0x88b,0x80 | FUN_857d */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x88b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x80)));
xt_write(t+5,1,(xt_read(t+5,1) & xt_read(t+6,1)));
xt_write(t+2,1,xt_read(t+5,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+5,1),UINT64_C(0x0),1));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+5,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85cb;return XT_OK;
}
case 0x85cb: { /* 1410 | SEI | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xef)));
xt_write(t+1,1,xt_shl(UINT64_C(0x1),UINT64_C(0x4),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x85cd;return XT_OK;
}
case 0x85cd: { /* 87 | CLRA | FUN_857d */
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
s->pc=0x85ce;return XT_OK;
}
case 0x85ce: { /* c7 | CLRB | FUN_857d */
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
s->pc=0x85cf;return XT_OK;
}
case 0x85cf: { /* 7c0a22 | STD 0xa22 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa22));
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
s->pc=0x85d2;return XT_OK;
}
case 0x85d2: { /* 7c0a24 | STD 0xa24 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa24));
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
s->pc=0x85d5;return XT_OK;
}
case 0x85d5: { /* b618e0 | LDAA 0x18e0 | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x18e0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85d8;return XT_OK;
}
case 0x85d8: { /* 8117 | CMPA #0x17 | FUN_857d */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x17));
xt_write(t+4,1,(xt_read(s->reg+0,1) - xt_read(t+3,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(t+4,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,(xt_read(t+4,1) == UINT64_C(0x0)));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+11,1,(xt_read(s->reg+0,1) < xt_read(t+3,1)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+11,1)));
s->pc=0x85da;return XT_OK;
}
case 0x85da: { /* 2502 | BCS 0x85de | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x85de;return XT_OK;}
s->pc=0x85dc;return XT_OK;
}
case 0x85dc: { /* 8616 | LDAA #0x16 | FUN_857d */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x16));
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
s->pc=0x85de;return XT_OK;
}
case 0x85de: { /* 810c | CMPA #0xc | FUN_857d */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0xc));
xt_write(t+4,1,(xt_read(s->reg+0,1) - xt_read(t+3,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(t+4,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,(xt_read(t+4,1) == UINT64_C(0x0)));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+11,1,(xt_read(s->reg+0,1) < xt_read(t+3,1)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+11,1)));
s->pc=0x85e0;return XT_OK;
}
case 0x85e0: { /* 2504 | BCS 0x85e6 | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x85e6;return XT_OK;}
s->pc=0x85e2;return XT_OK;
}
case 0x85e2: { /* 800c | SUBA #0xc | FUN_857d */
uint8_t t[13];
xt_write(t+11,1,UINT64_C(0xc));
xt_write(t+12,1,(xt_read(s->reg+0,1) - xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+11,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+12,1),UINT64_C(0x0),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+12,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,(xt_read(s->reg+0,1) < xt_read(t+11,1)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,1,xt_read(t+12,1));
s->pc=0x85e4;return XT_OK;
}
case 0x85e4: { /* 2006 | BRA 0x85ec | FUN_857d */
s->pc=0x85ec;return XT_OK;
s->pc=0x85e6;return XT_OK;
}
case 0x85e6: { /* 810b | CMPA #0xb | FUN_857d */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0xb));
xt_write(t+4,1,(xt_read(s->reg+0,1) - xt_read(t+3,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(t+4,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,(xt_read(t+4,1) == UINT64_C(0x0)));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+11,1,(xt_read(s->reg+0,1) < xt_read(t+3,1)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+11,1)));
s->pc=0x85e8;return XT_OK;
}
case 0x85e8: { /* 2602 | BNE 0x85ec | FUN_857d */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0x85ec;return XT_OK;}
s->pc=0x85ea;return XT_OK;
}
case 0x85ea: { /* 860a | LDAA #0xa | FUN_857d */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0xa));
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
s->pc=0x85ec;return XT_OK;
}
case 0x85ec: { /* 7a0a1c | STAA 0xa1c | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1c));
xt_write(t+2,1,xt_read(s->reg+0,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85ef;return XT_OK;
}
case 0x85ef: { /* 7a0a1d | STAA 0xa1d | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1d));
xt_write(t+2,1,xt_read(s->reg+0,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85f2;return XT_OK;
}
case 0x85f2: { /* 2002 | BRA 0x85f6 | FUN_857d */
s->pc=0x85f6;return XT_OK;
s->pc=0x85f4;return XT_OK;
}
case 0x85f4: { /* 1410 | SEI | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xef)));
xt_write(t+1,1,xt_shl(UINT64_C(0x1),UINT64_C(0x4),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x85f6;return XT_OK;
}
case 0x85f6: { /* 87 | CLRA | FUN_857d */
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
s->pc=0x85f7;return XT_OK;
}
case 0x85f7: { /* c7 | CLRB | FUN_857d */
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
s->pc=0x85f8;return XT_OK;
}
case 0x85f8: { /* 7c0a26 | STD 0xa26 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa26));
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
s->pc=0x85fb;return XT_OK;
}
case 0x85fb: { /* b618e0 | LDAA 0x18e0 | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x18e0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,xt_read(t+2,1));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
s->pc=0x85fe;return XT_OK;
}
case 0x85fe: { /* 8117 | CMPA #0x17 | FUN_857d */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x17));
xt_write(t+4,1,(xt_read(s->reg+0,1) - xt_read(t+3,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(t+4,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,(xt_read(t+4,1) == UINT64_C(0x0)));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+11,1,(xt_read(s->reg+0,1) < xt_read(t+3,1)));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+11,1)));
s->pc=0x8600;return XT_OK;
}
default:return XT_UNDECODED;}}
