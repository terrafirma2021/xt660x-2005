#include "xt660_lift.h"
int xt_page_8c(xt_state *s){switch(s->pc){
case 0x8c00: { /* 87 | CLRA | FUN_8b34 */
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
s->pc=0x8c01;return XT_OK;
}
case 0x8c01: { /* 7a0baf | STAA 0xbaf | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbaf));
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
s->pc=0x8c04;return XT_OK;
}
case 0x8c04: { /* fc0bb0 | LDD 0xbb0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb0));
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
s->pc=0x8c07;return XT_OK;
}
case 0x8c07: { /* bc0bb4 | CPD 0xbb4 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xbb4));
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
s->pc=0x8c0a;return XT_OK;
}
case 0x8c0a: { /* 2504 | BCS 0x8c10 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c10;return XT_OK;}
s->pc=0x8c0c;return XT_OK;
}
case 0x8c0c: { /* 8600 | LDAA #0x0 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x0));
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
s->pc=0x8c0e;return XT_OK;
}
case 0x8c0e: { /* 2007 | BRA 0x8c17 | FUN_8b34 */
s->pc=0x8c17;return XT_OK;
s->pc=0x8c10;return XT_OK;
}
case 0x8c10: { /* b60bba | LDAA 0xbba | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbba));
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
s->pc=0x8c13;return XT_OK;
}
case 0x8c13: { /* 8b01 | ADDA #0x1 | FUN_8b34 */
uint8_t t[23];
xt_write(t+21,1,UINT64_C(0x1));
xt_write(t+22,1,(xt_read(s->reg+0,1) + xt_read(t+21,1)));
xt_write(t+0,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(t+0,1),UINT64_C(0x4),1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+2,1,(xt_read(s->reg+0,1) & xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(t+21,1) & xt_read(t+1,1)));
xt_write(t+4,1,(xt_read(t+2,1) + xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(t+1,1) + UINT64_C(0x1)));
xt_write(t+6,1,(xt_read(t+4,1) & xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(t+6,1) != UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+22,1),UINT64_C(0x0),1));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+13,1,(xt_read(t+22,1) == UINT64_C(0x0)));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+16,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+21,1),1));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+19,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+21,1),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+19,1)));
xt_write(s->reg+0,1,xt_read(t+22,1));
s->pc=0x8c15;return XT_OK;
}
case 0x8c15: { /* 8200 | SBCA #0x0 | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8c17;return XT_OK;
}
case 0x8c17: { /* 7a0bba | STAA 0xbba | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbba));
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
s->pc=0x8c1a;return XT_OK;
}
case 0x8c1a: { /* 8104 | CMPA #0x4 | FUN_8b34 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x4));
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
s->pc=0x8c1c;return XT_OK;
}
case 0x8c1c: { /* 2510 | BCS 0x8c2e | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c2e;return XT_OK;}
s->pc=0x8c1e;return XT_OK;
}
case 0x8c1e: { /* fc0bb4 | LDD 0xbb4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb4));
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
s->pc=0x8c21;return XT_OK;
}
case 0x8c21: { /* 830001 | SUBD #0x1 | FUN_8b34 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0x1));
xt_write(t+13,2,(xt_read(s->reg+0,2) - xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,(xt_read(s->reg+0,2) < xt_read(t+11,2)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0x8c24;return XT_OK;
}
case 0x8c24: { /* c900 | ADCB #0x0 | FUN_8b34 */
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
s->pc=0x8c26;return XT_OK;
}
case 0x8c26: { /* 8900 | ADCA #0x0 | FUN_8b34 */
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
s->pc=0x8c28;return XT_OK;
}
case 0x8c28: { /* 7c0bb4 | STD 0xbb4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb4));
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
s->pc=0x8c2b;return XT_OK;
}
case 0x8c2b: { /* 790bba | CLR 0xbba | FUN_8b34 */
uint8_t t[10];
xt_write(t+0,2,UINT64_C(0xbba));
xt_write(t+2,1,UINT64_C(0x0));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+6,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+9,1) | UINT64_C(0x0)));
s->pc=0x8c2e;return XT_OK;
}
case 0x8c2e: { /* fc0bb0 | LDD 0xbb0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb0));
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
s->pc=0x8c31;return XT_OK;
}
case 0x8c31: { /* b30bb4 | SUBD 0xbb4 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xbb4));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8c34;return XT_OK;
}
case 0x8c34: { /* 2403 | BCC 0x8c39 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8c39;return XT_OK;}
s->pc=0x8c36;return XT_OK;
}
case 0x8c36: { /* cc0000 | LDD #0x0 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x0));
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
s->pc=0x8c39;return XT_OK;
}
case 0x8c39: { /* 7c0bb6 | STD 0xbb6 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb6));
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
s->pc=0x8c3c;return XT_OK;
}
case 0x8c3c: { /* fc08d0 | LDD 0x8d0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8d0));
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
s->pc=0x8c3f;return XT_OK;
}
case 0x8c3f: { /* bc08e0 | CPD 0x8e0 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x8e0));
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
s->pc=0x8c42;return XT_OK;
}
case 0x8c42: { /* 2504 | BCS 0x8c48 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c48;return XT_OK;}
s->pc=0x8c44;return XT_OK;
}
case 0x8c44: { /* 8600 | LDAA #0x0 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x0));
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
s->pc=0x8c46;return XT_OK;
}
case 0x8c46: { /* 2007 | BRA 0x8c4f | FUN_8b34 */
s->pc=0x8c4f;return XT_OK;
s->pc=0x8c48;return XT_OK;
}
case 0x8c48: { /* b608ef | LDAA 0x8ef | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x8ef));
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
s->pc=0x8c4b;return XT_OK;
}
case 0x8c4b: { /* 8b01 | ADDA #0x1 | FUN_8b34 */
uint8_t t[23];
xt_write(t+21,1,UINT64_C(0x1));
xt_write(t+22,1,(xt_read(s->reg+0,1) + xt_read(t+21,1)));
xt_write(t+0,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(t+0,1),UINT64_C(0x4),1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+2,1,(xt_read(s->reg+0,1) & xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(t+21,1) & xt_read(t+1,1)));
xt_write(t+4,1,(xt_read(t+2,1) + xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(t+1,1) + UINT64_C(0x1)));
xt_write(t+6,1,(xt_read(t+4,1) & xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(t+6,1) != UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+22,1),UINT64_C(0x0),1));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+13,1,(xt_read(t+22,1) == UINT64_C(0x0)));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+16,1,xt_scarry(xt_read(s->reg+0,1),xt_read(t+21,1),1));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+19,1,xt_carry(xt_read(s->reg+0,1),xt_read(t+21,1),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+19,1)));
xt_write(s->reg+0,1,xt_read(t+22,1));
s->pc=0x8c4d;return XT_OK;
}
case 0x8c4d: { /* 8200 | SBCA #0x0 | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0x0));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8c4f;return XT_OK;
}
case 0x8c4f: { /* 7a08ef | STAA 0x8ef | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x8ef));
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
s->pc=0x8c52;return XT_OK;
}
case 0x8c52: { /* 8104 | CMPA #0x4 | FUN_8b34 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x4));
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
s->pc=0x8c54;return XT_OK;
}
case 0x8c54: { /* 2510 | BCS 0x8c66 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c66;return XT_OK;}
s->pc=0x8c56;return XT_OK;
}
case 0x8c56: { /* fc08e0 | LDD 0x8e0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e0));
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
s->pc=0x8c59;return XT_OK;
}
case 0x8c59: { /* 830001 | SUBD #0x1 | FUN_8b34 */
uint8_t t[15];
xt_write(t+11,2,UINT64_C(0x1));
xt_write(t+13,2,(xt_read(s->reg+0,2) - xt_read(t+11,2)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+11,2),2));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+13,2),UINT64_C(0x0),2));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+13,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,(xt_read(s->reg+0,2) < xt_read(t+11,2)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,2,xt_read(t+13,2));
s->pc=0x8c5c;return XT_OK;
}
case 0x8c5c: { /* c900 | ADCB #0x0 | FUN_8b34 */
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
s->pc=0x8c5e;return XT_OK;
}
case 0x8c5e: { /* 8900 | ADCA #0x0 | FUN_8b34 */
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
s->pc=0x8c60;return XT_OK;
}
case 0x8c60: { /* 7c08e0 | STD 0x8e0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e0));
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
s->pc=0x8c63;return XT_OK;
}
case 0x8c63: { /* 7908ef | CLR 0x8ef | FUN_8b34 */
uint8_t t[10];
xt_write(t+0,2,UINT64_C(0x8ef));
xt_write(t+2,1,UINT64_C(0x0));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+6,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+8,1,xt_shl(UINT64_C(0x1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+9,1) | UINT64_C(0x0)));
s->pc=0x8c66;return XT_OK;
}
case 0x8c66: { /* fc08d0 | LDD 0x8d0 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8d0));
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
s->pc=0x8c69;return XT_OK;
}
case 0x8c69: { /* b308e0 | SUBD 0x8e0 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x8e0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8c6c;return XT_OK;
}
case 0x8c6c: { /* 2403 | BCC 0x8c71 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8c71;return XT_OK;}
s->pc=0x8c6e;return XT_OK;
}
case 0x8c6e: { /* cc0000 | LDD #0x0 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x0));
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
s->pc=0x8c71;return XT_OK;
}
case 0x8c71: { /* 7c08e2 | STD 0x8e2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e2));
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
s->pc=0x8c74;return XT_OK;
}
case 0x8c74: { /* fc08e4 | LDD 0x8e4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e4));
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
s->pc=0x8c77;return XT_OK;
}
case 0x8c77: { /* b308e2 | SUBD 0x8e2 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x8e2));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8c7a;return XT_OK;
}
case 0x8c7a: { /* 2404 | BCC 0x8c80 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8c80;return XT_OK;}
s->pc=0x8c7c;return XT_OK;
}
case 0x8c7c: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8c7d;return XT_OK;
}
case 0x8c7d: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8c7e;return XT_OK;
}
case 0x8c7e: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8c80;return XT_OK;
}
case 0x8c80: { /* 8c0008 | CPD #0x8 | FUN_8b34 */
uint8_t t[15];
xt_write(t+3,2,UINT64_C(0x8));
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
s->pc=0x8c83;return XT_OK;
}
case 0x8c83: { /* 2510 | BCS 0x8c95 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c95;return XT_OK;}
s->pc=0x8c85;return XT_OK;
}
case 0x8c85: { /* 1c088d08 | BSET 0x88d,0x8 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x88d));
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
s->pc=0x8c89;return XT_OK;
}
case 0x8c89: { /* 1c088d04 | BSET 0x88d,0x4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x88d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x4)));
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
s->pc=0x8c8d;return XT_OK;
}
case 0x8c8d: { /* fc08e2 | LDD 0x8e2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e2));
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
s->pc=0x8c90;return XT_OK;
}
case 0x8c90: { /* 7c08e4 | STD 0x8e4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e4));
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
s->pc=0x8c93;return XT_OK;
}
case 0x8c93: { /* 2004 | BRA 0x8c99 | FUN_8b34 */
s->pc=0x8c99;return XT_OK;
s->pc=0x8c95;return XT_OK;
}
case 0x8c95: { /* 1d088d08 | BCLR 0x88d,0x8 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x88d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x8)));
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
s->pc=0x8c99;return XT_OK;
}
case 0x8c99: { /* ce1840 | LDX #0x1840 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x1840));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8c9c;return XT_OK;
}
case 0x8c9c: { /* fc08e2 | LDD 0x8e2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e2));
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
s->pc=0x8c9f;return XT_OK;
}
case 0x8c9f: { /* b308e6 | SUBD 0x8e6 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x8e6));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8ca2;return XT_OK;
}
case 0x8ca2: { /* 240f | BCC 0x8cb3 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8cb3;return XT_OK;}
s->pc=0x8ca4;return XT_OK;
}
case 0x8ca4: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8ca5;return XT_OK;
}
case 0x8ca5: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8ca6;return XT_OK;
}
case 0x8ca6: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8ca8;return XT_OK;
}
case 0x8ca8: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8caa;return XT_OK;
}
case 0x8caa: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8cad));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8cad;return XT_OK;
}
case 0x8cad: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cae;return XT_OK;
}
case 0x8cae: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8caf;return XT_OK;
}
case 0x8caf: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8cb1;return XT_OK;
}
case 0x8cb1: { /* 2005 | BRA 0x8cb8 | FUN_8b34 */
s->pc=0x8cb8;return XT_OK;
s->pc=0x8cb3;return XT_OK;
}
case 0x8cb3: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8cb5;return XT_OK;
}
case 0x8cb5: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8cb8));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8cb8;return XT_OK;
}
case 0x8cb8: { /* f308e6 | ADDD 0x8e6 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x8e6));
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
s->pc=0x8cbb;return XT_OK;
}
case 0x8cbb: { /* 7c08e6 | STD 0x8e6 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e6));
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
s->pc=0x8cbe;return XT_OK;
}
case 0x8cbe: { /* ce1840 | LDX #0x1840 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x1840));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cc1;return XT_OK;
}
case 0x8cc1: { /* fc0bb6 | LDD 0xbb6 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb6));
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
s->pc=0x8cc4;return XT_OK;
}
case 0x8cc4: { /* b30bb8 | SUBD 0xbb8 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xbb8));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8cc7;return XT_OK;
}
case 0x8cc7: { /* 240f | BCC 0x8cd8 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8cd8;return XT_OK;}
s->pc=0x8cc9;return XT_OK;
}
case 0x8cc9: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cca;return XT_OK;
}
case 0x8cca: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8ccb;return XT_OK;
}
case 0x8ccb: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8ccd;return XT_OK;
}
case 0x8ccd: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8ccf;return XT_OK;
}
case 0x8ccf: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8cd2));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8cd2;return XT_OK;
}
case 0x8cd2: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cd3;return XT_OK;
}
case 0x8cd3: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8cd4;return XT_OK;
}
case 0x8cd4: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8cd6;return XT_OK;
}
case 0x8cd6: { /* 2005 | BRA 0x8cdd | FUN_8b34 */
s->pc=0x8cdd;return XT_OK;
s->pc=0x8cd8;return XT_OK;
}
case 0x8cd8: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8cda;return XT_OK;
}
case 0x8cda: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8cdd));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8cdd;return XT_OK;
}
case 0x8cdd: { /* f30bb8 | ADDD 0xbb8 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xbb8));
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
s->pc=0x8ce0;return XT_OK;
}
case 0x8ce0: { /* 7c0bb8 | STD 0xbb8 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb8));
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
s->pc=0x8ce3;return XT_OK;
}
case 0x8ce3: { /* ce312e | LDX #0x312e | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x312e));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8ce6;return XT_OK;
}
case 0x8ce6: { /* fc08e2 | LDD 0x8e2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e2));
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
s->pc=0x8ce9;return XT_OK;
}
case 0x8ce9: { /* b309d0 | SUBD 0x9d0 | FUN_8b34 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x9d0));
xt_write(t+2,2,xt_load(s,xt_read(t+0,2),2));
xt_write(t+15,2,xt_read(t+2,2));
xt_write(t+17,2,(xt_read(s->reg+0,2) - xt_read(t+15,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_sborrow(xt_read(s->reg+0,2),xt_read(t+15,2),2));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(t+17,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(t+17,2) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+13,1,(xt_read(s->reg+0,2) < xt_read(t+15,2)));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+13,1)));
xt_write(s->reg+0,2,xt_read(t+17,2));
s->pc=0x8cec;return XT_OK;
}
case 0x8cec: { /* 240f | BCC 0x8cfd | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8cfd;return XT_OK;}
s->pc=0x8cee;return XT_OK;
}
case 0x8cee: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cef;return XT_OK;
}
case 0x8cef: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8cf0;return XT_OK;
}
case 0x8cf0: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8cf2;return XT_OK;
}
case 0x8cf2: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8cf4;return XT_OK;
}
case 0x8cf4: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8cf7));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8cf7;return XT_OK;
}
case 0x8cf7: { /* 41 | COMA | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+0,1,(~xt_read(s->reg+0,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8cf8;return XT_OK;
}
case 0x8cf8: { /* 50 | NEGB | FUN_8b34 */
uint8_t t[12];
xt_write(t+3,1,xt_read(s->reg+1,1));
xt_write(s->reg+1,1,(UINT64_C(0)-xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,(xt_read(s->reg+1,1) != UINT64_C(0x0)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+9,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+11,1,xt_shl(xt_read(t+9,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(UINT64_C(0x0),xt_read(t+3,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x8cf9;return XT_OK;
}
case 0x8cf9: { /* 82ff | SBCA #0xff | FUN_8b34 */
uint8_t t[19];
xt_write(t+17,1,UINT64_C(0xff));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+0,1) - xt_read(t+17,1)));
xt_write(t+18,1,(xt_read(t+1,1) - xt_read(t+0,1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+2,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+17,1),1));
xt_write(t+3,1,xt_sborrow(xt_read(t+1,1),xt_read(t+0,1),1));
xt_write(t+4,1,((xt_read(t+2,1)!=0) ^ (xt_read(t+3,1)!=0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+7,1,(xt_read(s->reg+0,1) < xt_read(t+17,1)));
xt_write(t+8,1,(xt_read(t+1,1) < xt_read(t+0,1)));
xt_write(t+9,1,((xt_read(t+7,1)!=0) | (xt_read(t+8,1)!=0)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+11,1,xt_sless(xt_read(t+18,1),UINT64_C(0x0),1));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+14,1,(xt_read(t+18,1) == UINT64_C(0x0)));
xt_write(t+16,1,xt_shl(xt_read(t+14,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+16,1)));
xt_write(s->reg+0,1,xt_read(t+18,1));
s->pc=0x8cfb;return XT_OK;
}
case 0x8cfb: { /* 2005 | BRA 0x8d02 | FUN_8b34 */
s->pc=0x8d02;return XT_OK;
s->pc=0x8cfd;return XT_OK;
}
case 0x8cfd: { /* b7c6 | XGDY | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8cff;return XT_OK;
}
case 0x8cff: { /* 16c21c | JSR 0xc21c | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8d02));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8d02;return XT_OK;
}
default:return XT_UNDECODED;}}
