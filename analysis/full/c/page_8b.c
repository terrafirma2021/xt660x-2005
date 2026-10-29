#include "xt660_lift.h"
int xt_page_8b(xt_state *s){switch(s->pc){
case 0x8b01: { /* fc0a48 | LDD 0xa48 | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa48));
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
s->pc=0x8b04;return XT_OK;
}
case 0x8b04: { /* 201a | BRA 0x8b20 | FUN_87e7 */
s->pc=0x8b20;return XT_OK;
s->pc=0x8b06;return XT_OK;
}
case 0x8b06: { /* 7c0dde | STD 0xdde | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8b09;return XT_OK;
}
case 0x8b09: { /* b64b9a | LDAA 0x4b9a | FUN_87e7 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x4b9a));
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
s->pc=0x8b0c;return XT_OK;
}
case 0x8b0c: { /* 7a0aa0 | STAA 0xaa0 | FUN_87e7 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xaa0));
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
s->pc=0x8b0f;return XT_OK;
}
case 0x8b0f: { /* fc0dde | LDD 0xdde | FUN_87e7 */
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
s->pc=0x8b12;return XT_OK;
}
case 0x8b12: { /* 7c0dde | STD 0xdde | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8b15;return XT_OK;
}
case 0x8b15: { /* fc0a2e | LDD 0xa2e | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa2e));
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
s->pc=0x8b18;return XT_OK;
}
case 0x8b18: { /* bc0dde | CPD 0xdde | FUN_87e7 */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8b1b;return XT_OK;
}
case 0x8b1b: { /* 2503 | BCS 0x8b20 | FUN_87e7 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8b20;return XT_OK;}
s->pc=0x8b1d;return XT_OK;
}
case 0x8b1d: { /* fc0dde | LDD 0xdde | FUN_87e7 */
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
s->pc=0x8b20;return XT_OK;
}
case 0x8b20: { /* 7c0a96 | STD 0xa96 | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa96));
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
s->pc=0x8b23;return XT_OK;
}
case 0x8b23: { /* b7c6 | XGDY | FUN_87e7 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+18,2));
xt_write(s->reg+18,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x8b25;return XT_OK;
}
case 0x8b25: { /* ce4ba1 | LDX #0x4ba1 | FUN_87e7 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x4ba1));
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
s->pc=0x8b28;return XT_OK;
}
case 0x8b28: { /* 16c21c | JSR 0xc21c | FUN_87e7 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc21c));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8b2b));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8b2b;return XT_OK;
}
case 0x8b2b: { /* 59 | ASLD | FUN_87e7 */
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
s->pc=0x8b2c;return XT_OK;
}
case 0x8b2c: { /* 7c0a9a | STD 0xa9a | FUN_87e7 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa9a));
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
s->pc=0x8b2f;return XT_OK;
}
case 0x8b2f: { /* 1d08bc20 | BCLR 0x8bc,0x20 | FUN_87e7 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8bc));
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
s->pc=0x8b33;return XT_OK;
}
case 0x8b33: { /* 3d | RTS | FUN_87e7 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8b34;return XT_OK;
}
case 0x8b34: { /* 1d088240 | BCLR 0x882,0x40 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x882));
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
s->pc=0x8b38;return XT_OK;
}
case 0x8b38: { /* 1c08bc08 | BSET 0x8bc,0x8 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8bc));
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
s->pc=0x8b3c;return XT_OK;
}
case 0x8b3c: { /* 165fa4 | JSR 0x5fa4 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x5fa4));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8b3f));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8b3f;return XT_OK;
}
case 0x8b3f: { /* b60896 | LDAA 0x896 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x896));
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
s->pc=0x8b42;return XT_OK;
}
case 0x8b42: { /* 7a0dde | STAA 0xdde | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xdde));
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
s->pc=0x8b45;return XT_OK;
}
case 0x8b45: { /* 9601 | LDAA 0x0001 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,1,xt_load(s,0x0001,1));
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
s->pc=0x8b47;return XT_OK;
}
case 0x8b47: { /* 36 | PSHA | FUN_8b34 */
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x1)));
xt_store(s,xt_read(s->reg+42,2),1,xt_read(s->reg+0,1));
s->pc=0x8b48;return XT_OK;
}
case 0x8b48: { /* b80897 | EORA 0x897 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x897));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) ^ xt_read(t+2,1)));
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
s->pc=0x8b4b;return XT_OK;
}
case 0x8b4b: { /* 180e | TAB | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+1,1,xt_read(s->reg+0,1));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8b4d;return XT_OK;
}
case 0x8b4d: { /* b40896 | ANDA 0x896 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x896));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
s->pc=0x8b50;return XT_OK;
}
case 0x8b50: { /* 51 | COMB | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+1,1,(~xt_read(s->reg+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8b51;return XT_OK;
}
case 0x8b51: { /* f40897 | ANDB 0x897 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x897));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
s->pc=0x8b54;return XT_OK;
}
case 0x8b54: { /* 1806 | ABA | FUN_8b34 */
uint8_t t[22];
xt_write(t+21,1,(xt_read(s->reg+0,1) + xt_read(s->reg+1,1)));
xt_write(t+0,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(t+0,1),UINT64_C(0x4),1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+2,1,(xt_read(s->reg+0,1) & xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+1,1)));
xt_write(t+4,1,(xt_read(t+2,1) + xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(t+1,1) + UINT64_C(0x1)));
xt_write(t+6,1,(xt_read(t+4,1) & xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(t+6,1) != UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+21,1),UINT64_C(0x0),1));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+13,1,(xt_read(t+21,1) == UINT64_C(0x0)));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+16,1,xt_scarry(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+19,1,xt_carry(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+19,1)));
xt_write(s->reg+0,1,xt_read(t+21,1));
s->pc=0x8b56;return XT_OK;
}
case 0x8b56: { /* 33 | PULB | FUN_8b34 */
xt_write(s->reg+1,1,xt_load(s,xt_read(s->reg+42,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
s->pc=0x8b57;return XT_OK;
}
case 0x8b57: { /* 7c0896 | STD 0x896 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x896));
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
s->pc=0x8b5a;return XT_OK;
}
case 0x8b5a: { /* 9600 | LDAA 0x0000 | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+0,1,xt_load(s,0x0000,1));
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
s->pc=0x8b5c;return XT_OK;
}
case 0x8b5c: { /* 36 | PSHA | FUN_8b34 */
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x1)));
xt_store(s,xt_read(s->reg+42,2),1,xt_read(s->reg+0,1));
s->pc=0x8b5d;return XT_OK;
}
case 0x8b5d: { /* b80895 | EORA 0x895 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x895));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) ^ xt_read(t+2,1)));
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
s->pc=0x8b60;return XT_OK;
}
case 0x8b60: { /* 180e | TAB | FUN_8b34 */
uint8_t t[8];
xt_write(s->reg+1,1,xt_read(s->reg+0,1));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8b62;return XT_OK;
}
case 0x8b62: { /* b40894 | ANDA 0x894 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x894));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) & xt_read(t+2,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
s->pc=0x8b65;return XT_OK;
}
case 0x8b65: { /* 51 | COMB | FUN_8b34 */
uint8_t t[9];
xt_write(s->reg+1,1,(~xt_read(s->reg+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(s->reg+49,1,(xt_read(t+8,1) | UINT64_C(0x1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8b66;return XT_OK;
}
case 0x8b66: { /* f40895 | ANDB 0x895 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x895));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) & xt_read(t+2,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+4,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+5,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+8,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+10,1,xt_shl(xt_read(t+8,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
s->pc=0x8b69;return XT_OK;
}
case 0x8b69: { /* 1806 | ABA | FUN_8b34 */
uint8_t t[22];
xt_write(t+21,1,(xt_read(s->reg+0,1) + xt_read(s->reg+1,1)));
xt_write(t+0,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(t+0,1),UINT64_C(0x4),1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+2,1,(xt_read(s->reg+0,1) & xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+1,1) & xt_read(t+1,1)));
xt_write(t+4,1,(xt_read(t+2,1) + xt_read(t+3,1)));
xt_write(t+5,1,(xt_read(t+1,1) + UINT64_C(0x1)));
xt_write(t+6,1,(xt_read(t+4,1) & xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(t+6,1) != UINT64_C(0x0)));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x5),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_sless(xt_read(t+21,1),UINT64_C(0x0),1));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+13,1,(xt_read(t+21,1) == UINT64_C(0x0)));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+17,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+16,1,xt_scarry(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+19,1,xt_carry(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+19,1)));
xt_write(s->reg+0,1,xt_read(t+21,1));
s->pc=0x8b6b;return XT_OK;
}
case 0x8b6b: { /* 33 | PULB | FUN_8b34 */
xt_write(s->reg+1,1,xt_load(s,xt_read(s->reg+42,2),1));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x1)));
s->pc=0x8b6c;return XT_OK;
}
case 0x8b6c: { /* 7c0894 | STD 0x894 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x894));
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
s->pc=0x8b6f;return XT_OK;
}
case 0x8b6f: { /* b60d57 | LDAA 0xd57 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd57));
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
s->pc=0x8b72;return XT_OK;
}
case 0x8b72: { /* 8180 | CMPA #0x80 | FUN_8b34 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x80));
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
s->pc=0x8b74;return XT_OK;
}
case 0x8b74: { /* 2776 | BEQ 0x8bec | FUN_8b34 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8b76;return XT_OK;
}
case 0x8b76: { /* 1e08a00471 | BRSET 0x8a0,0x4,0x8bec | FUN_8b34 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8a0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x4)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8b7b;return XT_OK;
}
case 0x8b7b: { /* 1e08b2806c | BRSET 0x8b2,0x80,0x8bec | FUN_8b34 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8b2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x80)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8b80;return XT_OK;
}
case 0x8b80: { /* 1f08960147 | BRCLR 0x896,0x1,0x8bcc | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x896));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x1)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x8bcc;return XT_OK;}
s->pc=0x8b85;return XT_OK;
}
case 0x8b85: { /* b60900 | LDAA 0x900 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x900));
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
s->pc=0x8b88;return XT_OK;
}
case 0x8b88: { /* b14e4a | CMPA 0x4e4a | FUN_8b34 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0x4e4a));
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
s->pc=0x8b8b;return XT_OK;
}
case 0x8b8b: { /* 2505 | BCS 0x8b92 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8b92;return XT_OK;}
s->pc=0x8b8d;return XT_OK;
}
case 0x8b8d: { /* 1e0880010d | BRSET 0x880,0x1,0x8b9f | FUN_8b34 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x880));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x8b9f;return XT_OK;}
s->pc=0x8b92;return XT_OK;
}
case 0x8b92: { /* 1d08b604 | BCLR 0x8b6,0x4 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8b6));
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
s->pc=0x8b96;return XT_OK;
}
case 0x8b96: { /* 87 | CLRA | FUN_8b34 */
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
s->pc=0x8b97;return XT_OK;
}
case 0x8b97: { /* 7a0bc6 | STAA 0xbc6 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbc6));
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
s->pc=0x8b9a;return XT_OK;
}
case 0x8b9a: { /* 7a0bc7 | STAA 0xbc7 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbc7));
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
s->pc=0x8b9d;return XT_OK;
}
case 0x8b9d: { /* 204d | BRA 0x8bec | FUN_8b34 */
s->pc=0x8bec;return XT_OK;
s->pc=0x8b9f;return XT_OK;
}
case 0x8b9f: { /* 1f08b60422 | BRCLR 0x8b6,0x4,0x8bc6 | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x8b6));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x4)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x8bc6;return XT_OK;}
s->pc=0x8ba4;return XT_OK;
}
case 0x8ba4: { /* b60bc6 | LDAA 0xbc6 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbc6));
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
s->pc=0x8ba7;return XT_OK;
}
case 0x8ba7: { /* b10d8a | CMPA 0xd8a | FUN_8b34 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xd8a));
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
s->pc=0x8baa;return XT_OK;
}
case 0x8baa: { /* 2340 | BLS 0x8bec | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+2,1,(xt_read(t+1,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+0,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x1)));
if(xt_read(t+4,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8bac;return XT_OK;
}
case 0x8bac: { /* 1e08af0215 | BRSET 0x8af,0x2,0x8bc6 | FUN_8b34 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8af));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x2)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x8bc6;return XT_OK;}
s->pc=0x8bb1;return XT_OK;
}
case 0x8bb1: { /* 1c08af02 | BSET 0x8af,0x2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8af));
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
s->pc=0x8bb5;return XT_OK;
}
case 0x8bb5: { /* 1c0bd280 | BSET 0xbd2,0x80 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbd2));
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
s->pc=0x8bb9;return XT_OK;
}
case 0x8bb9: { /* 1e08b80208 | BRSET 0x8b8,0x2,0x8bc6 | FUN_8b34 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8b8));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x2)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x8bc6;return XT_OK;}
s->pc=0x8bbe;return XT_OK;
}
case 0x8bbe: { /* 1c08b802 | BSET 0x8b8,0x2 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8b8));
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
s->pc=0x8bc2;return XT_OK;
}
case 0x8bc2: { /* 1c0bd208 | BSET 0xbd2,0x8 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbd2));
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
s->pc=0x8bc6;return XT_OK;
}
case 0x8bc6: { /* 1c08b604 | BSET 0x8b6,0x4 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8b6));
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
s->pc=0x8bca;return XT_OK;
}
case 0x8bca: { /* 2020 | BRA 0x8bec | FUN_8b34 */
s->pc=0x8bec;return XT_OK;
s->pc=0x8bcc;return XT_OK;
}
case 0x8bcc: { /* 1f08b60406 | BRCLR 0x8b6,0x4,0x8bd7 | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x8b6));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x4)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x8bd7;return XT_OK;}
s->pc=0x8bd1;return XT_OK;
}
case 0x8bd1: { /* 1d08b604 | BCLR 0x8b6,0x4 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8b6));
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
s->pc=0x8bd5;return XT_OK;
}
case 0x8bd5: { /* 2015 | BRA 0x8bec | FUN_8b34 */
s->pc=0x8bec;return XT_OK;
s->pc=0x8bd7;return XT_OK;
}
case 0x8bd7: { /* b60bc7 | LDAA 0xbc7 | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbc7));
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
s->pc=0x8bda;return XT_OK;
}
case 0x8bda: { /* b10d8a | CMPA 0xd8a | FUN_8b34 */
uint8_t t[16];
xt_write(t+0,2,UINT64_C(0xd8a));
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
s->pc=0x8bdd;return XT_OK;
}
case 0x8bdd: { /* 230d | BLS 0x8bec | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+2,1,(xt_read(t+1,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+0,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x1)));
if(xt_read(t+4,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8bdf;return XT_OK;
}
case 0x8bdf: { /* 1f08af0208 | BRCLR 0x8af,0x2,0x8bec | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x8af));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x2)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x8bec;return XT_OK;}
s->pc=0x8be4;return XT_OK;
}
case 0x8be4: { /* 1d08af02 | BCLR 0x8af,0x2 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8af));
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
s->pc=0x8be8;return XT_OK;
}
case 0x8be8: { /* 1c0bd280 | BSET 0xbd2,0x80 | FUN_8b34 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbd2));
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
s->pc=0x8bec;return XT_OK;
}
case 0x8bec: { /* 1f0889200f | BRCLR 0x889,0x20,0x8c00 | FUN_8b34 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x889));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x20)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x8c00;return XT_OK;}
s->pc=0x8bf1;return XT_OK;
}
case 0x8bf1: { /* b60baf | LDAA 0xbaf | FUN_8b34 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xbaf));
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
s->pc=0x8bf4;return XT_OK;
}
case 0x8bf4: { /* 8b01 | ADDA #0x1 | FUN_8b34 */
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
s->pc=0x8bf6;return XT_OK;
}
case 0x8bf6: { /* 8200 | SBCA #0x0 | FUN_8b34 */
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
s->pc=0x8bf8;return XT_OK;
}
case 0x8bf8: { /* 8133 | CMPA #0x33 | FUN_8b34 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x33));
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
s->pc=0x8bfa;return XT_OK;
}
case 0x8bfa: { /* 2505 | BCS 0x8c01 | FUN_8b34 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8c01;return XT_OK;}
s->pc=0x8bfc;return XT_OK;
}
case 0x8bfc: { /* 1d088920 | BCLR 0x889,0x20 | FUN_8b34 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x889));
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
s->pc=0x8c00;return XT_OK;
}
default:return XT_UNDECODED;}}
