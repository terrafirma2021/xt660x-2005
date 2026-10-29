#include "xt660_lift.h"
int xt_page_c8(xt_state *s){switch(s->pc){
case 0xc800: { /* 7c0a2c | STD 0xa2c | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa2c));
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
s->pc=0xc803;return XT_OK;
}
case 0xc803: { /* 1e0cf2011d | BRSET 0xcf2,0x1,0xc825 | FUN_c712 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0xc825;return XT_OK;}
s->pc=0xc808;return XT_OK;
}
case 0xc808: { /* 1f0cf20413 | BRCLR 0xcf2,0x4,0xc820 | FUN_c712 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x4)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0xc820;return XT_OK;}
s->pc=0xc80d;return XT_OK;
}
case 0xc80d: { /* b60cf4 | LDAA 0xcf4 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc810;return XT_OK;
}
case 0xc810: { /* 8b01 | ADDA #0x1 | FUN_c712 */
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
s->pc=0xc812;return XT_OK;
}
case 0xc812: { /* 8200 | SBCA #0x0 | FUN_c712 */
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
s->pc=0xc814;return XT_OK;
}
case 0xc814: { /* 7a0cf4 | STAA 0xcf4 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc817;return XT_OK;
}
case 0xc817: { /* b10da5 | CMPA 0xda5 | FUN_c712 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xda5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+6,1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+0,1) - xt_read(t+6,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(t+7,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+7,1) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+6,1),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+14,1,(xt_read(s->reg+0,1) < xt_read(t+6,1)));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+14,1)));
s->pc=0xc81a;return XT_OK;
}
case 0xc81a: { /* 2504 | BCS 0xc820 | FUN_c712 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xc820;return XT_OK;}
s->pc=0xc81c;return XT_OK;
}
case 0xc81c: { /* 1d0cf204 | BCLR 0xcf2,0x4 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x4)));
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
s->pc=0xc820;return XT_OK;
}
case 0xc820: { /* fc092c | LDD 0x92c | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x92c));
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
s->pc=0xc823;return XT_OK;
}
case 0xc823: { /* 2025 | BRA 0xc84a | FUN_c712 */
s->pc=0xc84a;return XT_OK;
s->pc=0xc825;return XT_OK;
}
case 0xc825: { /* b60cf3 | LDAA 0xcf3 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf3));
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
s->pc=0xc828;return XT_OK;
}
case 0xc828: { /* 8b01 | ADDA #0x1 | FUN_c712 */
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
s->pc=0xc82a;return XT_OK;
}
case 0xc82a: { /* 8200 | SBCA #0x0 | FUN_c712 */
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
s->pc=0xc82c;return XT_OK;
}
case 0xc82c: { /* 7a0cf3 | STAA 0xcf3 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf3));
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
s->pc=0xc82f;return XT_OK;
}
case 0xc82f: { /* b10da4 | CMPA 0xda4 | FUN_c712 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xda4));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+6,1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+0,1) - xt_read(t+6,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(t+7,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+7,1) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+6,1),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+14,1,(xt_read(s->reg+0,1) < xt_read(t+6,1)));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+14,1)));
s->pc=0xc832;return XT_OK;
}
case 0xc832: { /* 2510 | BCS 0xc844 | FUN_c712 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xc844;return XT_OK;}
s->pc=0xc834;return XT_OK;
}
case 0xc834: { /* 1d0cf201 | BCLR 0xcf2,0x1 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x1)));
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
s->pc=0xc838;return XT_OK;
}
case 0xc838: { /* f70da5 | TST 0xda5 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xda5));
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
s->pc=0xc83b;return XT_OK;
}
case 0xc83b: { /* 2707 | BEQ 0xc844 | FUN_c712 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc844;return XT_OK;}
s->pc=0xc83d;return XT_OK;
}
case 0xc83d: { /* 790cf4 | CLR 0xcf4 | FUN_c712 */
uint8_t t[10];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc840;return XT_OK;
}
case 0xc840: { /* 1c0cf204 | BSET 0xcf2,0x4 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcf2));
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
s->pc=0xc844;return XT_OK;
}
case 0xc844: { /* fc0cfc | LDD 0xcfc | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcfc));
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
s->pc=0xc847;return XT_OK;
}
case 0xc847: { /* 7c092a | STD 0x92a | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x92a));
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
s->pc=0xc84a;return XT_OK;
}
case 0xc84a: { /* 7c0b74 | STD 0xb74 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xb74));
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
s->pc=0xc84d;return XT_OK;
}
case 0xc84d: { /* 1c0a1820 | BSET 0xa18,0x20 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa18));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x20)));
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
s->pc=0xc851;return XT_OK;
}
case 0xc851: { /* 2071 | BRA 0xc8c4 | FUN_c712 */
s->pc=0xc8c4;return XT_OK;
s->pc=0xc853;return XT_OK;
}
case 0xc853: { /* 1e0cf2011d | BRSET 0xcf2,0x1,0xc875 | FUN_c712 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0xc875;return XT_OK;}
s->pc=0xc858;return XT_OK;
}
case 0xc858: { /* 1f0cf20413 | BRCLR 0xcf2,0x4,0xc870 | FUN_c712 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x4)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0xc870;return XT_OK;}
s->pc=0xc85d;return XT_OK;
}
case 0xc85d: { /* b60cf4 | LDAA 0xcf4 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc860;return XT_OK;
}
case 0xc860: { /* 8b01 | ADDA #0x1 | FUN_c712 */
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
s->pc=0xc862;return XT_OK;
}
case 0xc862: { /* 8200 | SBCA #0x0 | FUN_c712 */
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
s->pc=0xc864;return XT_OK;
}
case 0xc864: { /* 7a0cf4 | STAA 0xcf4 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc867;return XT_OK;
}
case 0xc867: { /* b10da5 | CMPA 0xda5 | FUN_c712 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xda5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+6,1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+0,1) - xt_read(t+6,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(t+7,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+7,1) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+6,1),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+14,1,(xt_read(s->reg+0,1) < xt_read(t+6,1)));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+14,1)));
s->pc=0xc86a;return XT_OK;
}
case 0xc86a: { /* 2504 | BCS 0xc870 | FUN_c712 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xc870;return XT_OK;}
s->pc=0xc86c;return XT_OK;
}
case 0xc86c: { /* 1d0cf204 | BCLR 0xcf2,0x4 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x4)));
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
s->pc=0xc870;return XT_OK;
}
case 0xc870: { /* fc092c | LDD 0x92c | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x92c));
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
s->pc=0xc873;return XT_OK;
}
case 0xc873: { /* 2025 | BRA 0xc89a | FUN_c712 */
s->pc=0xc89a;return XT_OK;
s->pc=0xc875;return XT_OK;
}
case 0xc875: { /* b60cf3 | LDAA 0xcf3 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf3));
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
s->pc=0xc878;return XT_OK;
}
case 0xc878: { /* 8b01 | ADDA #0x1 | FUN_c712 */
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
s->pc=0xc87a;return XT_OK;
}
case 0xc87a: { /* 8200 | SBCA #0x0 | FUN_c712 */
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
s->pc=0xc87c;return XT_OK;
}
case 0xc87c: { /* 7a0cf3 | STAA 0xcf3 | FUN_c712 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcf3));
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
s->pc=0xc87f;return XT_OK;
}
case 0xc87f: { /* b10da4 | CMPA 0xda4 | FUN_c712 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xda4));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+6,1,xt_read(t+2,1));
xt_write(t+7,1,(xt_read(s->reg+0,1) - xt_read(t+6,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(t+7,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+12,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+11,1,(xt_read(t+7,1) == UINT64_C(0x0)));
xt_write(t+13,1,xt_shl(xt_read(t+11,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+12,1) | xt_read(t+13,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(t+6,1),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+15,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+14,1,(xt_read(s->reg+0,1) < xt_read(t+6,1)));
xt_write(s->reg+49,1,(xt_read(t+15,1) | xt_read(t+14,1)));
s->pc=0xc882;return XT_OK;
}
case 0xc882: { /* 2510 | BCS 0xc894 | FUN_c712 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xc894;return XT_OK;}
s->pc=0xc884;return XT_OK;
}
case 0xc884: { /* 1d0cf201 | BCLR 0xcf2,0x1 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x1)));
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
s->pc=0xc888;return XT_OK;
}
case 0xc888: { /* f70da5 | TST 0xda5 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xda5));
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
s->pc=0xc88b;return XT_OK;
}
case 0xc88b: { /* 2707 | BEQ 0xc894 | FUN_c712 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc894;return XT_OK;}
s->pc=0xc88d;return XT_OK;
}
case 0xc88d: { /* 790cf4 | CLR 0xcf4 | FUN_c712 */
uint8_t t[10];
xt_write(t+0,2,UINT64_C(0xcf4));
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
s->pc=0xc890;return XT_OK;
}
case 0xc890: { /* 1c0cf204 | BSET 0xcf2,0x4 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcf2));
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
s->pc=0xc894;return XT_OK;
}
case 0xc894: { /* fc0cfc | LDD 0xcfc | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcfc));
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
s->pc=0xc897;return XT_OK;
}
case 0xc897: { /* 7c092a | STD 0x92a | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x92a));
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
s->pc=0xc89a;return XT_OK;
}
case 0xc89a: { /* 7c0b74 | STD 0xb74 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xb74));
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
s->pc=0xc89d;return XT_OK;
}
case 0xc89d: { /* 1820fede | LBRA 0xc77f | FUN_c712 */
s->pc=0xc77f;return XT_OK;
s->pc=0xc8a1;return XT_OK;
}
case 0xc8a1: { /* fc0af0 | LDD 0xaf0 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xaf0));
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
s->pc=0xc8a4;return XT_OK;
}
case 0xc8a4: { /* f30a24 | ADDD 0xa24 | FUN_c712 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xa24));
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
s->pc=0xc8a7;return XT_OK;
}
case 0xc8a7: { /* 5c5e | STD 0x005e | FUN_c712 */
uint8_t t[8];
xt_store(s,0x005e,2,xt_read(s->reg+0,2));
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
s->pc=0xc8a9;return XT_OK;
}
case 0xc8a9: { /* 9648 | LDAA 0x0048 | FUN_c712 */
uint8_t t[8];
xt_write(s->reg+0,1,xt_load(s,0x0048,1));
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
s->pc=0xc8ab;return XT_OK;
}
case 0xc8ab: { /* 8a80 | ORAA #0x80 | FUN_c712 */
uint8_t t[8];
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) | UINT64_C(0x80)));
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
s->pc=0xc8ad;return XT_OK;
}
case 0xc8ad: { /* 84bf | ANDA #0xbf | FUN_c712 */
uint8_t t[8];
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) & UINT64_C(0xbf)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
s->pc=0xc8af;return XT_OK;
}
case 0xc8af: { /* 5a48 | STAA 0x0048 | FUN_c712 */
uint8_t t[8];
xt_store(s,0x0048,1,xt_read(s->reg+0,1));
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
s->pc=0xc8b1;return XT_OK;
}
case 0xc8b1: { /* 8680 | LDAA #0x80 | FUN_c712 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x80));
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
s->pc=0xc8b3;return XT_OK;
}
case 0xc8b3: { /* 5a4e | STAA 0x004e | FUN_c712 */
uint8_t t[8];
xt_store(s,0x004e,1,xt_read(s->reg+0,1));
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
s->pc=0xc8b5;return XT_OK;
}
case 0xc8b5: { /* 4c4c80 | BSET 0x004c,0x80 | FUN_c712 */
uint8_t t[9];
xt_write(t+2,1,(xt_load(s,0x004c,1) | UINT64_C(0x80)));
xt_store(s,0x004c,1,xt_read(t+2,1));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+2,1),UINT64_C(0x0),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+2,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xc8b8;return XT_OK;
}
case 0xc8b8: { /* 1c0a1802 | BSET 0xa18,0x2 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa18));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x2)));
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
s->pc=0xc8bc;return XT_OK;
}
case 0xc8bc: { /* 1c0a1702 | BSET 0xa17,0x2 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa17));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x2)));
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
s->pc=0xc8c0;return XT_OK;
}
case 0xc8c0: { /* 1c0a1620 | BSET 0xa16,0x20 | FUN_c712 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa16));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,(xt_read(t+2,1) | UINT64_C(0x20)));
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
s->pc=0xc8c4;return XT_OK;
}
case 0xc8c4: { /* 1d08c140 | BCLR 0x8c1,0x40 | FUN_c712 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8c1));
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
s->pc=0xc8c8;return XT_OK;
}
case 0xc8c8: { /* 3d | RTS | FUN_c712 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xc8c9;return XT_OK;
}
case 0xc8c9: { /* 8640 | LDAA #0x40 | FUN_c8c9 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x40));
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
s->pc=0xc8cb;return XT_OK;
}
case 0xc8cb: { /* 5a4e | STAA 0x004e | FUN_c8c9 */
uint8_t t[8];
xt_store(s,0x004e,1,xt_read(s->reg+0,1));
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
s->pc=0xc8cd;return XT_OK;
}
case 0xc8cd: { /* 96e1 | LDAA 0x00e1 | FUN_c8c9 */
uint8_t t[8];
xt_write(s->reg+0,1,xt_load(s,0x00e1,1));
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
s->pc=0xc8cf;return XT_OK;
}
case 0xc8cf: { /* 8440 | ANDA #0x40 | FUN_c8c9 */
uint8_t t[8];
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) & UINT64_C(0x40)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
s->pc=0xc8d1;return XT_OK;
}
case 0xc8d1: { /* 2743 | BEQ 0xc916 | FUN_c8c9 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc916;return XT_OK;}
s->pc=0xc8d3;return XT_OK;
}
case 0xc8d3: { /* 1f0a180836 | BRCLR 0xa18,0x8,0xc90e | FUN_c8c9 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0xa18));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x8)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0xc90e;return XT_OK;}
s->pc=0xc8d8;return XT_OK;
}
case 0xc8d8: { /* dc5c | LDD 0x005c | FUN_c8c9 */
uint8_t t[8];
xt_write(s->reg+0,2,xt_load(s,0x005c,2));
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
s->pc=0xc8da;return XT_OK;
}
case 0xc8da: { /* 9344 | SUBD 0x0044 | FUN_c8c9 */
uint8_t t[15];
xt_write(t+11,2,xt_load(s,0x0044,2));
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
s->pc=0xc8dc;return XT_OK;
}
case 0xc8dc: { /* 2b25 | BMI 0xc903 | FUN_c8c9 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc903;return XT_OK;}
s->pc=0xc8de;return XT_OK;
}
case 0xc8de: { /* b30926 | SUBD 0x926 | FUN_c8c9 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x926));
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
s->pc=0xc8e1;return XT_OK;
}
case 0xc8e1: { /* 2b20 | BMI 0xc903 | FUN_c8c9 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc903;return XT_OK;}
s->pc=0xc8e3;return XT_OK;
}
case 0xc8e3: { /* b34f18 | SUBD 0x4f18 | FUN_c8c9 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0x4f18));
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
s->pc=0xc8e6;return XT_OK;
}
case 0xc8e6: { /* 2b1b | BMI 0xc903 | FUN_c8c9 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xc903;return XT_OK;}
s->pc=0xc8e8;return XT_OK;
}
case 0xc8e8: { /* dc5c | LDD 0x005c | FUN_c8c9 */
uint8_t t[8];
xt_write(s->reg+0,2,xt_load(s,0x005c,2));
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
s->pc=0xc8ea;return XT_OK;
}
case 0xc8ea: { /* 7c0a2a | STD 0xa2a | FUN_c8c9 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa2a));
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
s->pc=0xc8ed;return XT_OK;
}
case 0xc8ed: { /* fc0926 | LDD 0x926 | FUN_c8c9 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x926));
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
s->pc=0xc8f0;return XT_OK;
}
case 0xc8f0: { /* 7c0b72 | STD 0xb72 | FUN_c8c9 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xb72));
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
s->pc=0xc8f3;return XT_OK;
}
case 0xc8f3: { /* 16c55b | JSR 0xc55b | FUN_c8c9 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc55b));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xc8f6));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xc8f6;return XT_OK;
}
case 0xc8f6: { /* 4c4c40 | BSET 0x004c,0x40 | FUN_c8c9 */
uint8_t t[9];
xt_write(t+2,1,(xt_load(s,0x004c,1) | UINT64_C(0x40)));
xt_store(s,0x004c,1,xt_read(t+2,1));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+2,1),UINT64_C(0x0),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+2,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xc8f9;return XT_OK;
}
case 0xc8f9: { /* 87 | CLRA | FUN_c8c9 */
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
s->pc=0xc8fa;return XT_OK;
}
case 0xc8fa: { /* c7 | CLRB | FUN_c8c9 */
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
s->pc=0xc8fb;return XT_OK;
}
case 0xc8fb: { /* 7c0b76 | STD 0xb76 | FUN_c8c9 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xb76));
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
s->pc=0xc8fe;return XT_OK;
}
case 0xc8fe: { /* 1c0a1880 | BSET 0xa18,0x80 | FUN_c8c9 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa18));
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
s->pc=0xc902;return XT_OK;
}
default:return XT_UNDECODED;}}
