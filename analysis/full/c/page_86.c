#include "xt660_lift.h"
int xt_page_86(xt_state *s){switch(s->pc){
case 0x8600: { /* 2502 | BCS 0x8604 | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x8604;return XT_OK;}
s->pc=0x8602;return XT_OK;
}
case 0x8602: { /* 8616 | LDAA #0x16 | FUN_857d */
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
s->pc=0x8604;return XT_OK;
}
case 0x8604: { /* 810c | CMPA #0xc | FUN_857d */
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
s->pc=0x8606;return XT_OK;
}
case 0x8606: { /* 2504 | BCS 0x860c | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x860c;return XT_OK;}
s->pc=0x8608;return XT_OK;
}
case 0x8608: { /* 800c | SUBA #0xc | FUN_857d */
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
s->pc=0x860a;return XT_OK;
}
case 0x860a: { /* 2006 | BRA 0x8612 | FUN_857d */
s->pc=0x8612;return XT_OK;
s->pc=0x860c;return XT_OK;
}
case 0x860c: { /* 810b | CMPA #0xb | FUN_857d */
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
s->pc=0x860e;return XT_OK;
}
case 0x860e: { /* 2602 | BNE 0x8612 | FUN_857d */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0x8612;return XT_OK;}
s->pc=0x8610;return XT_OK;
}
case 0x8610: { /* 860a | LDAA #0xa | FUN_857d */
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
s->pc=0x8612;return XT_OK;
}
case 0x8612: { /* 7a0a1e | STAA 0xa1e | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1e));
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
s->pc=0x8615;return XT_OK;
}
case 0x8615: { /* 87 | CLRA | FUN_857d */
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
s->pc=0x8616;return XT_OK;
}
case 0x8616: { /* c7 | CLRB | FUN_857d */
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
s->pc=0x8617;return XT_OK;
}
case 0x8617: { /* 7c0a28 | STD 0xa28 | FUN_857d */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xa28));
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
s->pc=0x861a;return XT_OK;
}
case 0x861a: { /* b60a1e | LDAA 0xa1e | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1e));
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
s->pc=0x861d;return XT_OK;
}
case 0x861d: { /* 7a0a1f | STAA 0xa1f | FUN_857d */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xa1f));
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
s->pc=0x8620;return XT_OK;
}
case 0x8620: { /* 10ef | CLI | FUN_857d */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xef)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x4),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x8622;return XT_OK;
}
case 0x8622: { /* 3d | RTS | FUN_857d */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8623;return XT_OK;
}
case 0x8623: { /* c080 | SUBB #0x80 | FUN_8623 */
uint8_t t[13];
xt_write(t+11,1,UINT64_C(0x80));
xt_write(t+12,1,(xt_read(s->reg+1,1) - xt_read(t+11,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+1,1),xt_read(t+11,1),1));
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
xt_write(t+9,1,(xt_read(s->reg+1,1) < xt_read(t+11,1)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+1,1,xt_read(t+12,1));
s->pc=0x8625;return XT_OK;
}
case 0x8625: { /* 2419 | BCC 0x8640 | FUN_8623 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x8640;return XT_OK;}
s->pc=0x8627;return XT_OK;
}
case 0x8627: { /* cb80 | ADDB #0x80 | FUN_8623 */
uint8_t t[23];
xt_write(t+21,1,UINT64_C(0x80));
xt_write(t+22,1,(xt_read(s->reg+1,1) + xt_read(t+21,1)));
xt_write(t+0,1,(UINT64_C(0)-UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(t+0,1),UINT64_C(0x4),1));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xdf)));
xt_write(t+2,1,(xt_read(s->reg+1,1) & xt_read(t+1,1)));
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
xt_write(t+16,1,xt_scarry(xt_read(s->reg+1,1),xt_read(t+21,1),1));
xt_write(t+18,1,xt_shl(xt_read(t+16,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+17,1) | xt_read(t+18,1)));
xt_write(t+20,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+19,1,xt_carry(xt_read(s->reg+1,1),xt_read(t+21,1),1));
xt_write(s->reg+49,1,(xt_read(t+20,1) | xt_read(t+19,1)));
xt_write(s->reg+1,1,xt_read(t+22,1));
s->pc=0x8629;return XT_OK;
}
case 0x8629: { /* 8680 | LDAA #0x80 | FUN_8623 */
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
s->pc=0x862b;return XT_OK;
}
case 0x862b: { /* 1816 | SBA | FUN_8623 */
uint8_t t[12];
xt_write(t+11,1,(xt_read(s->reg+0,1) - xt_read(s->reg+1,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+11,1),UINT64_C(0x0),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+11,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,(xt_read(s->reg+0,1) < xt_read(s->reg+1,1)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,1,xt_read(t+11,1));
s->pc=0x862d;return XT_OK;
}
case 0x862d: { /* f609a0 | LDAB 0x9a0 | FUN_8623 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x9a0));
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
s->pc=0x8630;return XT_OK;
}
case 0x8630: { /* 12 | MUL | FUN_8623 */
uint8_t t[6];
xt_write(t+0,2,xt_read(s->reg+0,1));
xt_write(t+2,2,xt_read(s->reg+1,1));
xt_write(s->reg+0,2,(xt_read(t+0,2) * xt_read(t+2,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,xt_shr(xt_read(s->reg+1,1),UINT64_C(0x7),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
s->pc=0x8631;return XT_OK;
}
case 0x8631: { /* c30080 | ADDD #0x80 | FUN_8623 */
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
s->pc=0x8634;return XT_OK;
}
case 0x8634: { /* 180e | TAB | FUN_8623 */
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
s->pc=0x8636;return XT_OK;
}
case 0x8636: { /* 8680 | LDAA #0x80 | FUN_8623 */
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
s->pc=0x8638;return XT_OK;
}
case 0x8638: { /* 1816 | SBA | FUN_8623 */
uint8_t t[12];
xt_write(t+11,1,(xt_read(s->reg+0,1) - xt_read(s->reg+1,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(s->reg+0,1),xt_read(s->reg+1,1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+3,1,xt_sless(xt_read(t+11,1),UINT64_C(0x0),1));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(t+11,1) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+10,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+9,1,(xt_read(s->reg+0,1) < xt_read(s->reg+1,1)));
xt_write(s->reg+49,1,(xt_read(t+10,1) | xt_read(t+9,1)));
xt_write(s->reg+0,1,xt_read(t+11,1));
s->pc=0x863a;return XT_OK;
}
case 0x863a: { /* 2411 | BCC 0x864d | FUN_8623 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x864d;return XT_OK;}
s->pc=0x863c;return XT_OK;
}
case 0x863c: { /* 8600 | LDAA #0x0 | FUN_8623 */
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
s->pc=0x863e;return XT_OK;
}
case 0x863e: { /* 200d | BRA 0x864d | FUN_8623 */
s->pc=0x864d;return XT_OK;
s->pc=0x8640;return XT_OK;
}
case 0x8640: { /* b609a0 | LDAA 0x9a0 | FUN_8623 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x9a0));
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
s->pc=0x8643;return XT_OK;
}
case 0x8643: { /* 12 | MUL | FUN_8623 */
uint8_t t[6];
xt_write(t+0,2,xt_read(s->reg+0,1));
xt_write(t+2,2,xt_read(s->reg+1,1));
xt_write(s->reg+0,2,(xt_read(t+0,2) * xt_read(t+2,2)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+4,1,xt_shr(xt_read(s->reg+1,1),UINT64_C(0x7),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
s->pc=0x8644;return XT_OK;
}
case 0x8644: { /* c30080 | ADDD #0x80 | FUN_8623 */
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
s->pc=0x8647;return XT_OK;
}
case 0x8647: { /* 8b80 | ADDA #0x80 | FUN_8623 */
uint8_t t[23];
xt_write(t+21,1,UINT64_C(0x80));
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
s->pc=0x8649;return XT_OK;
}
case 0x8649: { /* 2402 | BCC 0x864d | FUN_8623 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x864d;return XT_OK;}
s->pc=0x864b;return XT_OK;
}
case 0x864b: { /* 86ff | LDAA #0xff | FUN_8623 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0xff));
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
s->pc=0x864d;return XT_OK;
}
case 0x864d: { /* 3d | RTS | FUN_8623 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x864e;return XT_OK;
}
case 0x864e: { /* fc0900 | LDD 0x900 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x900));
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
s->pc=0x8651;return XT_OK;
}
case 0x8651: { /* 7c0ba2 | STD 0xba2 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xba2));
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
s->pc=0x8654;return XT_OK;
}
case 0x8654: { /* cc1a02 | LDD #0x1a02 | FUN_864e */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x1a02));
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
s->pc=0x8657;return XT_OK;
}
case 0x8657: { /* 7c0ba4 | STD 0xba4 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xba4));
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
s->pc=0x865a;return XT_OK;
}
case 0x865a: { /* 860c | LDAA #0xc | FUN_864e */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0xc));
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
s->pc=0x865c;return XT_OK;
}
case 0x865c: { /* 16ca49 | JSR 0xca49 | FUN_864e */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xca49));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x865f));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x865f;return XT_OK;
}
case 0x865f: { /* 7c0cee | STD 0xcee | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcee));
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
s->pc=0x8662;return XT_OK;
}
case 0x8662: { /* fc08e8 | LDD 0x8e8 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8e8));
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
s->pc=0x8665;return XT_OK;
}
case 0x8665: { /* 7c0ba2 | STD 0xba2 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xba2));
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
s->pc=0x8668;return XT_OK;
}
case 0x8668: { /* cc19e4 | LDD #0x19e4 | FUN_864e */
uint8_t t[8];
xt_write(s->reg+0,2,UINT64_C(0x19e4));
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
s->pc=0x866b;return XT_OK;
}
case 0x866b: { /* 7c0ba4 | STD 0xba4 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xba4));
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
s->pc=0x866e;return XT_OK;
}
case 0x866e: { /* 860f | LDAA #0xf | FUN_864e */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0xf));
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
s->pc=0x8670;return XT_OK;
}
case 0x8670: { /* 16ca49 | JSR 0xca49 | FUN_864e */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xca49));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x8673));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8673;return XT_OK;
}
case 0x8673: { /* 7c0cf0 | STD 0xcf0 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcf0));
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
s->pc=0x8676;return XT_OK;
}
case 0x8676: { /* fc0cee | LDD 0xcee | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcee));
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
s->pc=0x8679;return XT_OK;
}
case 0x8679: { /* 7c0dde | STD 0xdde | FUN_864e */
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
s->pc=0x867c;return XT_OK;
}
case 0x867c: { /* fc0cf0 | LDD 0xcf0 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcf0));
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
s->pc=0x867f;return XT_OK;
}
case 0x867f: { /* 7c0de0 | STD 0xde0 | FUN_864e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xde0));
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
s->pc=0x8682;return XT_OK;
}
case 0x8682: { /* c60f | LDAB #0xf | FUN_864e */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0xf));
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
s->pc=0x8684;return XT_OK;
}
case 0x8684: { /* ce1a17 | LDX #0x1a17 | FUN_864e */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x1a17));
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
s->pc=0x8687;return XT_OK;
}
case 0x8687: { /* 16c32d | JSR 0xc32d | FUN_864e */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0xc32d));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x868a));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x868a;return XT_OK;
}
case 0x868a: { /* c30080 | ADDD #0x80 | FUN_864e */
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
s->pc=0x868d;return XT_OK;
}
case 0x868d: { /* 7a0cec | STAA 0xcec | FUN_864e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xcec));
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
s->pc=0x8690;return XT_OK;
}
case 0x8690: { /* 3d | RTS | FUN_864e */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x8691;return XT_OK;
}
case 0x8691: { /* 1d088104 | BCLR 0x881,0x4 | FUN_8691 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x881));
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
s->pc=0x8695;return XT_OK;
}
case 0x8695: { /* 1c08bf80 | BSET 0x8bf,0x80 | FUN_8691 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8bf));
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
s->pc=0x8699;return XT_OK;
}
case 0x8699: { /* 1d08bf80 | BCLR 0x8bf,0x80 | FUN_8691 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8bf));
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
s->pc=0x869d;return XT_OK;
}
case 0x869d: { /* 3d | RTS | FUN_8691 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x869e;return XT_OK;
}
case 0x869e: { /* 1d088102 | BCLR 0x881,0x2 | FUN_869e */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x881));
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
s->pc=0x86a2;return XT_OK;
}
case 0x86a2: { /* 1c08c020 | BSET 0x8c0,0x20 | FUN_869e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8c0));
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
s->pc=0x86a6;return XT_OK;
}
case 0x86a6: { /* 87 | CLRA | FUN_869e */
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
s->pc=0x86a7;return XT_OK;
}
case 0x86a7: { /* f6189a | LDAB 0x189a | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x189a));
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
s->pc=0x86aa;return XT_OK;
}
case 0x86aa: { /* 59 | ASLD | FUN_869e */
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
s->pc=0x86ab;return XT_OK;
}
case 0x86ab: { /* c30c58 | ADDD #0xc58 | FUN_869e */
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
s->pc=0x86ae;return XT_OK;
}
case 0x86ae: { /* b7c5 | XGDX | FUN_869e */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+16,2));
xt_write(s->reg+16,2,xt_read(s->reg+0,2));
xt_write(s->reg+0,2,xt_read(t+0,2));
s->pc=0x86b0;return XT_OK;
}
case 0x86b0: { /* cd0cb8 | LDY #0xcb8 | FUN_869e */
uint8_t t[8];
xt_write(s->reg+18,2,UINT64_C(0xcb8));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+18,2),UINT64_C(0x0),2));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x86b3;return XT_OK;
}
case 0x86b3: { /* 87 | CLRA | FUN_869e */
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
s->pc=0x86b4;return XT_OK;
}
case 0x86b4: { /* 7a0b3c | STAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86b7;return XT_OK;
}
case 0x86b7: { /* ec00 | LDD 0,IX | FUN_869e */
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
s->pc=0x86b9;return XT_OK;
}
case 0x86b9: { /* 6c40 | STD 0,IY | FUN_869e */
uint8_t t[10];
xt_write(t+0,2,xt_read(s->reg+0,2));
xt_store(s,xt_read(s->reg+18,2),2,xt_read(t+0,2));
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
s->pc=0x86bb;return XT_OK;
}
case 0x86bb: { /* b60b3c | LDAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86be;return XT_OK;
}
case 0x86be: { /* 8b01 | ADDA #0x1 | FUN_869e */
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
s->pc=0x86c0;return XT_OK;
}
case 0x86c0: { /* 8200 | SBCA #0x0 | FUN_869e */
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
s->pc=0x86c2;return XT_OK;
}
case 0x86c2: { /* 7a0b3c | STAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86c5;return XT_OK;
}
case 0x86c5: { /* 8105 | CMPA #0x5 | FUN_869e */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x5));
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
s->pc=0x86c7;return XT_OK;
}
case 0x86c7: { /* 2406 | BCC 0x86cf | FUN_869e */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x86cf;return XT_OK;}
s->pc=0x86c9;return XT_OK;
}
case 0x86c9: { /* 08 | INX | FUN_869e */
uint8_t t[3];
xt_write(s->reg+16,2,(xt_read(s->reg+16,2) + UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+0,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x86ca;return XT_OK;
}
case 0x86ca: { /* 08 | INX | FUN_869e */
uint8_t t[3];
xt_write(s->reg+16,2,(xt_read(s->reg+16,2) + UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+0,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x86cb;return XT_OK;
}
case 0x86cb: { /* 02 | INY | FUN_869e */
uint8_t t[3];
xt_write(s->reg+18,2,(xt_read(s->reg+18,2) + UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+0,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x86cc;return XT_OK;
}
case 0x86cc: { /* 02 | INY | FUN_869e */
uint8_t t[3];
xt_write(s->reg+18,2,(xt_read(s->reg+18,2) + UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+0,1,(xt_read(s->reg+18,2) == UINT64_C(0x0)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x86cd;return XT_OK;
}
case 0x86cd: { /* 20e8 | BRA 0x86b7 | FUN_869e */
s->pc=0x86b7;return XT_OK;
s->pc=0x86cf;return XT_OK;
}
case 0x86cf: { /* ce0cb8 | LDX #0xcb8 | FUN_869e */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0xcb8));
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
s->pc=0x86d2;return XT_OK;
}
case 0x86d2: { /* ec00 | LDD 0,IX | FUN_869e */
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
s->pc=0x86d4;return XT_OK;
}
case 0x86d4: { /* 7c0ccc | STD 0xccc | FUN_869e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xccc));
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
s->pc=0x86d7;return XT_OK;
}
case 0x86d7: { /* 7c0cce | STD 0xcce | FUN_869e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcce));
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
s->pc=0x86da;return XT_OK;
}
case 0x86da: { /* 87 | CLRA | FUN_869e */
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
s->pc=0x86db;return XT_OK;
}
case 0x86db: { /* 7a0b3c | STAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86de;return XT_OK;
}
case 0x86de: { /* 2014 | BRA 0x86f4 | FUN_869e */
s->pc=0x86f4;return XT_OK;
s->pc=0x86e0;return XT_OK;
}
case 0x86e0: { /* ec00 | LDD 0,IX | FUN_869e */
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
s->pc=0x86e2;return XT_OK;
}
case 0x86e2: { /* bc0ccc | CPD 0xccc | FUN_869e */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xccc));
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
s->pc=0x86e5;return XT_OK;
}
case 0x86e5: { /* 2505 | BCS 0x86ec | FUN_869e */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x86ec;return XT_OK;}
s->pc=0x86e7;return XT_OK;
}
case 0x86e7: { /* 7c0ccc | STD 0xccc | FUN_869e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xccc));
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
s->pc=0x86ea;return XT_OK;
}
case 0x86ea: { /* 2008 | BRA 0x86f4 | FUN_869e */
s->pc=0x86f4;return XT_OK;
s->pc=0x86ec;return XT_OK;
}
case 0x86ec: { /* bc0cce | CPD 0xcce | FUN_869e */
uint8_t t[19];
xt_write(t+0,2,UINT64_C(0xcce));
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
s->pc=0x86ef;return XT_OK;
}
case 0x86ef: { /* 2403 | BCC 0x86f4 | FUN_869e */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x86f4;return XT_OK;}
s->pc=0x86f1;return XT_OK;
}
case 0x86f1: { /* 7c0cce | STD 0xcce | FUN_869e */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xcce));
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
s->pc=0x86f4;return XT_OK;
}
case 0x86f4: { /* b60b3c | LDAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86f7;return XT_OK;
}
case 0x86f7: { /* 8b01 | ADDA #0x1 | FUN_869e */
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
s->pc=0x86f9;return XT_OK;
}
case 0x86f9: { /* 8200 | SBCA #0x0 | FUN_869e */
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
s->pc=0x86fb;return XT_OK;
}
case 0x86fb: { /* 7a0b3c | STAA 0xb3c | FUN_869e */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb3c));
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
s->pc=0x86fe;return XT_OK;
}
case 0x86fe: { /* 8105 | CMPA #0x5 | FUN_869e */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x5));
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
s->pc=0x8700;return XT_OK;
}
default:return XT_UNDECODED;}}
