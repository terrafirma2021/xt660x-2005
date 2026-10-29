#include "xt660_lift.h"
int xt_page_f7(xt_state *s){switch(s->pc){
case 0xf700: { /* 3d | RTS | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf701;return XT_OK;
}
case 0xf701: { /* 8680 | LDAA #0x80 | FUN_f6c0 */
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
s->pc=0xf703;return XT_OK;
}
case 0xf703: { /* 5a4e | STAA 0x004e | FUN_f6c0 */
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
s->pc=0xf705;return XT_OK;
}
case 0xf705: { /* 4d4c80 | BCLR 0x004c,0x80 | FUN_f6c0 */
uint8_t t[10];
xt_write(t+2,1,xt_load(s,0x004c,1));
xt_write(t+3,1,(~UINT64_C(0x80)));
xt_write(t+2,1,(xt_read(t+2,1) & xt_read(t+3,1)));
xt_store(s,0x004c,1,xt_read(t+2,1));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+4,1,xt_sless(xt_read(t+2,1),UINT64_C(0x0),1));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+7,1,(xt_read(t+2,1) == UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0xf708;return XT_OK;
}
case 0xf708: { /* 1d0a1802 | BCLR 0xa18,0x2 | FUN_f6c0 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xa18));
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
s->pc=0xf70c;return XT_OK;
}
case 0xf70c: { /* 3d | RTS | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf70d;return XT_OK;
}
case 0xf70d: { /* 1e0a182005 | BRSET 0xa18,0x20,0xf717 | FUN_f6c0 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0xa18));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x20)));
xt_write(t+5,1,(xt_read(t+4,1) == UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0xf717;return XT_OK;}
s->pc=0xf712;return XT_OK;
}
case 0xf712: { /* fc0b74 | LDD 0xb74 | FUN_f6c0 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xb74));
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
s->pc=0xf715;return XT_OK;
}
case 0xf715: { /* 2007 | BRA 0xf71e | FUN_f6c0 */
s->pc=0xf71e;return XT_OK;
s->pc=0xf717;return XT_OK;
}
case 0xf717: { /* 1d0a1820 | BCLR 0xa18,0x20 | FUN_f6c0 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xa18));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+5,1,xt_read(t+2,1));
xt_write(t+6,1,(~UINT64_C(0x20)));
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
s->pc=0xf71b;return XT_OK;
}
case 0xf71b: { /* fc092c | LDD 0x92c | FUN_f6c0 */
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
s->pc=0xf71e;return XT_OK;
}
case 0xf71e: { /* b7c6 | XGDY | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xf720;return XT_OK;
}
case 0xf720: { /* 1e0cf2011c | BRSET 0xcf2,0x1,0xf741 | FUN_f6c0 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(t+4,1) == UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0xf741;return XT_OK;}
s->pc=0xf725;return XT_OK;
}
case 0xf725: { /* 1f0cf20413 | BRCLR 0xcf2,0x4,0xf73d | FUN_f6c0 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0xcf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x4)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0xf73d;return XT_OK;}
s->pc=0xf72a;return XT_OK;
}
case 0xf72a: { /* b60cf4 | LDAA 0xcf4 | FUN_f6c0 */
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
s->pc=0xf72d;return XT_OK;
}
case 0xf72d: { /* 8b01 | ADDA #0x1 | FUN_f6c0 */
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
s->pc=0xf72f;return XT_OK;
}
case 0xf72f: { /* 8200 | SBCA #0x0 | FUN_f6c0 */
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
s->pc=0xf731;return XT_OK;
}
case 0xf731: { /* 7a0cf4 | STAA 0xcf4 | FUN_f6c0 */
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
s->pc=0xf734;return XT_OK;
}
case 0xf734: { /* b10da5 | CMPA 0xda5 | FUN_f6c0 */
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
s->pc=0xf737;return XT_OK;
}
case 0xf737: { /* 2504 | BCS 0xf73d | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xf73d;return XT_OK;}
s->pc=0xf739;return XT_OK;
}
case 0xf739: { /* 1d0cf204 | BCLR 0xcf2,0x4 | FUN_f6c0 */
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
s->pc=0xf73d;return XT_OK;
}
case 0xf73d: { /* b7c6 | XGDY | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0xf73f;return XT_OK;
}
case 0xf73f: { /* 2022 | BRA 0xf763 | FUN_f6c0 */
s->pc=0xf763;return XT_OK;
s->pc=0xf741;return XT_OK;
}
case 0xf741: { /* b60cf3 | LDAA 0xcf3 | FUN_f6c0 */
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
s->pc=0xf744;return XT_OK;
}
case 0xf744: { /* 8b01 | ADDA #0x1 | FUN_f6c0 */
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
s->pc=0xf746;return XT_OK;
}
case 0xf746: { /* 8200 | SBCA #0x0 | FUN_f6c0 */
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
s->pc=0xf748;return XT_OK;
}
case 0xf748: { /* 7a0cf3 | STAA 0xcf3 | FUN_f6c0 */
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
s->pc=0xf74b;return XT_OK;
}
case 0xf74b: { /* b10da4 | CMPA 0xda4 | FUN_f6c0 */
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
s->pc=0xf74e;return XT_OK;
}
case 0xf74e: { /* 2510 | BCS 0xf760 | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0xf760;return XT_OK;}
s->pc=0xf750;return XT_OK;
}
case 0xf750: { /* 1d0cf201 | BCLR 0xcf2,0x1 | FUN_f6c0 */
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
s->pc=0xf754;return XT_OK;
}
case 0xf754: { /* f70da5 | TST 0xda5 | FUN_f6c0 */
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
s->pc=0xf757;return XT_OK;
}
case 0xf757: { /* 2707 | BEQ 0xf760 | FUN_f6c0 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0xf760;return XT_OK;}
s->pc=0xf759;return XT_OK;
}
case 0xf759: { /* 790cf4 | CLR 0xcf4 | FUN_f6c0 */
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
s->pc=0xf75c;return XT_OK;
}
case 0xf75c: { /* 1c0cf204 | BSET 0xcf2,0x4 | FUN_f6c0 */
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
s->pc=0xf760;return XT_OK;
}
case 0xf760: { /* fc0cfc | LDD 0xcfc | FUN_f6c0 */
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
s->pc=0xf763;return XT_OK;
}
case 0xf763: { /* d35e | ADDD 0x005e | FUN_f6c0 */
uint8_t t[15];
xt_write(t+11,2,xt_load(s,0x005e,2));
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
s->pc=0xf765;return XT_OK;
}
case 0xf765: { /* 5c5e | STD 0x005e | FUN_f6c0 */
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
s->pc=0xf767;return XT_OK;
}
case 0xf767: { /* 9648 | LDAA 0x0048 | FUN_f6c0 */
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
s->pc=0xf769;return XT_OK;
}
case 0xf769: { /* 8ac0 | ORAA #0xc0 | FUN_f6c0 */
uint8_t t[8];
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) | UINT64_C(0xc0)));
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
s->pc=0xf76b;return XT_OK;
}
case 0xf76b: { /* 5a48 | STAA 0x0048 | FUN_f6c0 */
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
s->pc=0xf76d;return XT_OK;
}
case 0xf76d: { /* 8680 | LDAA #0x80 | FUN_f6c0 */
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
s->pc=0xf76f;return XT_OK;
}
case 0xf76f: { /* 5a4e | STAA 0x004e | FUN_f6c0 */
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
s->pc=0xf771;return XT_OK;
}
case 0xf771: { /* 4c4c80 | BSET 0x004c,0x80 | FUN_f6c0 */
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
s->pc=0xf774;return XT_OK;
}
case 0xf774: { /* 1d0a1802 | BCLR 0xa18,0x2 | FUN_f6c0 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0xa18));
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
s->pc=0xf778;return XT_OK;
}
case 0xf778: { /* 3d | RTS | FUN_f6c0 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf779;return XT_OK;
}
case 0xf7a0: { /* 065000 | JMP 0x5000 | application_init */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x5000));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7a3;return XT_OK;
}
case 0xf7a4: { /* 20fe | BRA 0xf7a4 | default_interrupt_loop */
s->pc=0xf7a4;return XT_OK;
s->pc=0xf7a6;return XT_OK;
}
case 0xf7a6: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7a6 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7a9));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7a9;return XT_OK;
}
case 0xf7a9: { /* 0b | RTI | dispatch_stub_f7a6 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7aa;return XT_OK;
}
case 0xf7aa: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7aa */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7ad));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7ad;return XT_OK;
}
case 0xf7ad: { /* 0b | RTI | dispatch_stub_f7aa */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ae;return XT_OK;
}
case 0xf7ae: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7ae */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7b1));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7b1;return XT_OK;
}
case 0xf7b1: { /* 0b | RTI | dispatch_stub_f7ae */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7b2;return XT_OK;
}
case 0xf7b2: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7b2 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7b5));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7b5;return XT_OK;
}
case 0xf7b5: { /* 0b | RTI | dispatch_stub_f7b2 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7b6;return XT_OK;
}
case 0xf7b6: { /* 16cdc0 | JSR 0xcdc0 | dispatch_stub_f7b6 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xcdc0));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7b9));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7b9;return XT_OK;
}
case 0xf7b9: { /* 0b | RTI | dispatch_stub_f7b6 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ba;return XT_OK;
}
case 0xf7ba: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7ba */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7bd));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7bd;return XT_OK;
}
case 0xf7bd: { /* 0b | RTI | dispatch_stub_f7ba */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7be;return XT_OK;
}
case 0xf7be: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7be */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7c1));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7c1;return XT_OK;
}
case 0xf7c1: { /* 0b | RTI | dispatch_stub_f7be */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7c2;return XT_OK;
}
case 0xf7c2: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7c2 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7c5));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7c5;return XT_OK;
}
case 0xf7c5: { /* 0b | RTI | dispatch_stub_f7c2 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7c6;return XT_OK;
}
case 0xf7c6: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7c6 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7c9));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7c9;return XT_OK;
}
case 0xf7c9: { /* 0b | RTI | dispatch_stub_f7c6 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ca;return XT_OK;
}
case 0xf7ca: { /* 16f6c0 | JSR 0xf6c0 | dispatch_stub_f7ca */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf6c0));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7cd));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7cd;return XT_OK;
}
case 0xf7cd: { /* 0b | RTI | dispatch_stub_f7ca */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ce;return XT_OK;
}
case 0xf7ce: { /* 16f607 | JSR 0xf607 | dispatch_stub_f7ce */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf607));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7d1));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7d1;return XT_OK;
}
case 0xf7d1: { /* 0b | RTI | dispatch_stub_f7ce */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7d2;return XT_OK;
}
case 0xf7d2: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7d2 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7d5));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7d5;return XT_OK;
}
case 0xf7d5: { /* 0b | RTI | dispatch_stub_f7d2 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7d6;return XT_OK;
}
case 0xf7d6: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7d6 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7d9));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7d9;return XT_OK;
}
case 0xf7d9: { /* 0b | RTI | dispatch_stub_f7d6 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7da;return XT_OK;
}
case 0xf7da: { /* 16f424 | JSR 0xf424 | dispatch_stub_f7da */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf424));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7dd));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7dd;return XT_OK;
}
case 0xf7dd: { /* 0b | RTI | dispatch_stub_f7da */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7de;return XT_OK;
}
case 0xf7de: { /* 16f3f3 | JSR 0xf3f3 | dispatch_stub_f7de */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf3f3));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7e1));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7e1;return XT_OK;
}
case 0xf7e1: { /* 0b | RTI | dispatch_stub_f7de */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7e2;return XT_OK;
}
case 0xf7e2: { /* 16d871 | JSR 0xd871 | dispatch_stub_f7e2 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xd871));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7e5));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7e5;return XT_OK;
}
case 0xf7e5: { /* 0b | RTI | dispatch_stub_f7e2 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7e6;return XT_OK;
}
case 0xf7e6: { /* 16f7a4 | JSR 0xf7a4 | dispatch_stub_f7e6 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xf7a4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7e9));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7e9;return XT_OK;
}
case 0xf7e9: { /* 0b | RTI | dispatch_stub_f7e6 */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ea;return XT_OK;
}
case 0xf7ea: { /* 16cca9 | JSR 0xcca9 | dispatch_stub_f7ea */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xcca9));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0xf7ed));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0xf7ed;return XT_OK;
}
case 0xf7ed: { /* 0b | RTI | dispatch_stub_f7ea */
uint8_t t[6];
xt_write(t+4,2,UINT64_C(0x0));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+49,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+1,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+0,2,xt_read(s->reg+42,2));
xt_write(s->reg+0,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+16,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(s->reg+18,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
xt_write(t+2,2,xt_read(s->reg+42,2));
xt_write(t+4,2,xt_load(s,xt_read(t+2,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+4,2);return XT_OK;
s->pc=0xf7ee;return XT_OK;
}
default:return XT_UNDECODED;}}
