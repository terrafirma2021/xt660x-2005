#include "xt660_lift.h"
int xt_page_69(xt_state *s){switch(s->pc){
case 0x6900: { /* c602 | LDAB #0x2 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x2));
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
s->pc=0x6902;return XT_OK;
}
case 0x6902: { /* 8102 | CMPA #0x2 | FUN_6772 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x2));
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
s->pc=0x6904;return XT_OK;
}
case 0x6904: { /* 2726 | BEQ 0x692c | FUN_6772 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x692c;return XT_OK;}
s->pc=0x6906;return XT_OK;
}
case 0x6906: { /* c605 | LDAB #0x5 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x5));
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
s->pc=0x6908;return XT_OK;
}
case 0x6908: { /* 8106 | CMPA #0x6 | FUN_6772 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x6));
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
s->pc=0x690a;return XT_OK;
}
case 0x690a: { /* 2720 | BEQ 0x692c | FUN_6772 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x692c;return XT_OK;}
s->pc=0x690c;return XT_OK;
}
case 0x690c: { /* c606 | LDAB #0x6 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x6));
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
s->pc=0x690e;return XT_OK;
}
case 0x690e: { /* 8107 | CMPA #0x7 | FUN_6772 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x7));
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
s->pc=0x6910;return XT_OK;
}
case 0x6910: { /* 271a | BEQ 0x692c | FUN_6772 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x692c;return XT_OK;}
s->pc=0x6912;return XT_OK;
}
case 0x6912: { /* b608c5 | LDAA 0x8c5 | FUN_6772 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0x8c5));
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
s->pc=0x6915;return XT_OK;
}
case 0x6915: { /* 840f | ANDA #0xf | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+0,1,(xt_read(s->reg+0,1) & UINT64_C(0xf)));
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
s->pc=0x6917;return XT_OK;
}
case 0x6917: { /* c601 | LDAB #0x1 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x1));
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
s->pc=0x6919;return XT_OK;
}
case 0x6919: { /* 8103 | CMPA #0x3 | FUN_6772 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0x3));
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
s->pc=0x691b;return XT_OK;
}
case 0x691b: { /* 270f | BEQ 0x692c | FUN_6772 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x692c;return XT_OK;}
s->pc=0x691d;return XT_OK;
}
case 0x691d: { /* c603 | LDAB #0x3 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x3));
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
s->pc=0x691f;return XT_OK;
}
case 0x691f: { /* 810b | CMPA #0xb | FUN_6772 */
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
s->pc=0x6921;return XT_OK;
}
case 0x6921: { /* 2709 | BEQ 0x692c | FUN_6772 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x1)));
if(xt_read(t+2,1)){s->pc=0x692c;return XT_OK;}
s->pc=0x6923;return XT_OK;
}
case 0x6923: { /* c600 | LDAB #0x0 | FUN_6772 */
uint8_t t[8];
xt_write(s->reg+1,1,UINT64_C(0x0));
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
s->pc=0x6925;return XT_OK;
}
case 0x6925: { /* 2005 | BRA 0x692c | FUN_6772 */
s->pc=0x692c;return XT_OK;
s->pc=0x6927;return XT_OK;
}
case 0x6927: { /* 8664 | LDAA #0x64 | candidate_unreferenced_6927 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0x64));
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
s->pc=0x6929;return XT_OK;
}
case 0x6929: { /* 43 | DECA | candidate_unreferenced_6927 */
uint8_t t[10];
xt_write(t+3,1,xt_read(s->reg+0,1));
xt_write(s->reg+0,1,(xt_read(t+3,1) - UINT64_C(0x1)));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+0,1) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+0,1),UINT64_C(0x0),1));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_sborrow(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x692a;return XT_OK;
}
case 0x692a: { /* 26fd | BNE 0x6929 | candidate_unreferenced_6927 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0x6929;return XT_OK;}
s->pc=0x692c;return XT_OK;
}
case 0x692c: { /* 1410 | SEI | candidate_unreferenced_6927 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xef)));
xt_write(t+1,1,xt_shl(UINT64_C(0x1),UINT64_C(0x4),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x692e;return XT_OK;
}
case 0x692e: { /* 5b85 | STAB 0x0085 | candidate_unreferenced_6927 */
uint8_t t[8];
xt_store(s,0x0085,1,xt_read(s->reg+1,1));
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
s->pc=0x6930;return XT_OK;
}
case 0x6930: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6931;return XT_OK;
}
case 0x6931: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6932;return XT_OK;
}
case 0x6932: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6933;return XT_OK;
}
case 0x6933: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6934;return XT_OK;
}
case 0x6934: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6935;return XT_OK;
}
case 0x6935: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6936;return XT_OK;
}
case 0x6936: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6937;return XT_OK;
}
case 0x6937: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6938;return XT_OK;
}
case 0x6938: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6939;return XT_OK;
}
case 0x6939: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693a;return XT_OK;
}
case 0x693a: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693b;return XT_OK;
}
case 0x693b: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693c;return XT_OK;
}
case 0x693c: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693d;return XT_OK;
}
case 0x693d: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693e;return XT_OK;
}
case 0x693e: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x693f;return XT_OK;
}
case 0x693f: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6940;return XT_OK;
}
case 0x6940: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6941;return XT_OK;
}
case 0x6941: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6942;return XT_OK;
}
case 0x6942: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6943;return XT_OK;
}
case 0x6943: { /* a7 | NOP | candidate_unreferenced_6927 */
s->pc=0x6944;return XT_OK;
}
case 0x6944: { /* 10ef | CLI | candidate_unreferenced_6927 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xef)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x4),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
s->pc=0x6946;return XT_OK;
}
case 0x6946: { /* 3d | RTS | candidate_unreferenced_6927 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x6947;return XT_OK;
}
case 0x6978: { /* ce6958 | LDX #0x6958 | FUN_6978 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x6958));
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
s->pc=0x697b;return XT_OK;
}
case 0x697b: { /* d608 | LDAB 0x0008 | FUN_6978 */
uint8_t t[8];
xt_write(s->reg+1,1,xt_load(s,0x0008,1));
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
s->pc=0x697d;return XT_OK;
}
case 0x697d: { /* c40c | ANDB #0xc | FUN_6978 */
uint8_t t[8];
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) & UINT64_C(0xc)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
s->pc=0x697f;return XT_OK;
}
case 0x697f: { /* 56 | RORB | FUN_6978 */
uint8_t t[16];
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+7,1,xt_shl(xt_read(t+6,1),UINT64_C(0x7),1));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+8,1,(xt_read(s->reg+1,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+1,1,xt_shr(xt_read(s->reg+1,1),UINT64_C(0x1),1));
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) | xt_read(t+7,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0x6980;return XT_OK;
}
case 0x6980: { /* 1ae5 | ABX | FUN_6978 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+1,1));
xt_write(s->reg+16,2,(xt_read(t+0,2) + xt_read(s->reg+16,2)));
s->pc=0x6982;return XT_OK;
}
case 0x6982: { /* ee00 | LDX 0,IX | FUN_6978 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+16,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0x6984;return XT_OK;
}
case 0x6984: { /* 1500 | JSR 0,IX | FUN_6978 */
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x6986));
s->pc=(uint16_t)xt_read(s->reg+16,2);return XT_OK;
s->pc=0x6986;return XT_OK;
}
case 0x6986: { /* 3d | RTS | FUN_6978 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x6987;return XT_OK;
}
case 0x6987: { /* ce6960 | LDX #0x6960 | FUN_6987 */
uint8_t t[8];
xt_write(s->reg+16,2,UINT64_C(0x6960));
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
s->pc=0x698a;return XT_OK;
}
case 0x698a: { /* d608 | LDAB 0x0008 | FUN_6987 */
uint8_t t[8];
xt_write(s->reg+1,1,xt_load(s,0x0008,1));
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
s->pc=0x698c;return XT_OK;
}
case 0x698c: { /* c40c | ANDB #0xc | FUN_6987 */
uint8_t t[8];
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) & UINT64_C(0xc)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+1,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+0,1) | xt_read(t+1,1)));
xt_write(t+3,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+2,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+4,1,xt_shl(xt_read(t+2,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+3,1) | xt_read(t+4,1)));
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+5,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+7,1,xt_shl(xt_read(t+5,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+6,1) | xt_read(t+7,1)));
s->pc=0x698e;return XT_OK;
}
case 0x698e: { /* 56 | RORB | FUN_6987 */
uint8_t t[16];
xt_write(t+6,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+7,1,xt_shl(xt_read(t+6,1),UINT64_C(0x7),1));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+8,1,(xt_read(s->reg+1,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+8,1)));
xt_write(s->reg+1,1,xt_shr(xt_read(s->reg+1,1),UINT64_C(0x1),1));
xt_write(s->reg+1,1,(xt_read(s->reg+1,1) | xt_read(t+7,1)));
xt_write(t+11,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+10,1,(xt_read(s->reg+1,1) == UINT64_C(0x0)));
xt_write(t+12,1,xt_shl(xt_read(t+10,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+11,1) | xt_read(t+12,1)));
xt_write(t+14,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+13,1,xt_sless(xt_read(s->reg+1,1),UINT64_C(0x0),1));
xt_write(t+15,1,xt_shl(xt_read(t+13,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+14,1) | xt_read(t+15,1)));
xt_write(t+4,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x3),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+1,1) ^ xt_read(t+2,1)));
xt_write(t+5,1,xt_shl(xt_read(t+3,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+4,1) | xt_read(t+5,1)));
s->pc=0x698f;return XT_OK;
}
case 0x698f: { /* 1ae5 | ABX | FUN_6987 */
uint8_t t[2];
xt_write(t+0,2,xt_read(s->reg+1,1));
xt_write(s->reg+16,2,(xt_read(t+0,2) + xt_read(s->reg+16,2)));
s->pc=0x6991;return XT_OK;
}
case 0x6991: { /* ee00 | LDX 0,IX | FUN_6987 */
uint8_t t[10];
xt_write(t+0,2,xt_load(s,xt_read(s->reg+16,2),2));
xt_write(s->reg+16,2,xt_read(t+0,2));
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+4,1,(xt_read(s->reg+16,2) == UINT64_C(0x0)));
xt_write(t+6,1,xt_shl(xt_read(t+4,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+6,1)));
xt_write(t+8,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+7,1,xt_sless(xt_read(s->reg+16,2),UINT64_C(0x0),2));
xt_write(t+9,1,xt_shl(xt_read(t+7,1),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+8,1) | xt_read(t+9,1)));
xt_write(t+2,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+3,1,xt_shl(UINT64_C(0x0),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+2,1) | xt_read(t+3,1)));
s->pc=0x6993;return XT_OK;
}
case 0x6993: { /* 1500 | JSR 0,IX | FUN_6987 */
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) - UINT64_C(0x2)));
xt_store(s,xt_read(s->reg+42,2),2,UINT64_C(0x6995));
s->pc=(uint16_t)xt_read(s->reg+16,2);return XT_OK;
s->pc=0x6995;return XT_OK;
}
case 0x6995: { /* 3d | RTS | FUN_6987 */
uint8_t t[2];
xt_write(t+0,2,UINT64_C(0x0));
xt_write(t+0,2,xt_load(s,xt_read(s->reg+42,2),2));
xt_write(s->reg+42,2,(xt_read(s->reg+42,2) + UINT64_C(0x2)));
s->pc=(uint16_t)xt_read(t+0,2);return XT_OK;
s->pc=0x6996;return XT_OK;
}
case 0x6996: { /* 81ff | CMPA #0xff | FUN_6996 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0xff));
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
s->pc=0x6998;return XT_OK;
}
case 0x6998: { /* 2602 | BNE 0x699c | FUN_6996 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0x699c;return XT_OK;}
s->pc=0x699a;return XT_OK;
}
case 0x699a: { /* 86fe | LDAA #0xfe | FUN_6996 */
uint8_t t[8];
xt_write(s->reg+0,1,UINT64_C(0xfe));
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
s->pc=0x699c;return XT_OK;
}
case 0x699c: { /* 7a0ae9 | STAA 0xae9 | FUN_6996 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xae9));
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
s->pc=0x699f;return XT_OK;
}
case 0x699f: { /* fc08ca | LDD 0x8ca | FUN_6996 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8ca));
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
s->pc=0x69a2;return XT_OK;
}
case 0x69a2: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a3;return XT_OK;
}
case 0x69a3: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a4;return XT_OK;
}
case 0x69a4: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a5;return XT_OK;
}
case 0x69a5: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a6;return XT_OK;
}
case 0x69a6: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a7;return XT_OK;
}
case 0x69a7: { /* 49 | LSRD | FUN_6996 */
uint8_t t[11];
xt_write(t+5,1,(xt_read(s->reg+49,1) & UINT64_C(0xfe)));
xt_write(t+3,1,xt_shr(xt_read(s->reg+0,2),8*UINT64_C(0x0),2));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x1)));
xt_write(s->reg+49,1,(xt_read(t+5,1) | xt_read(t+4,1)));
xt_write(s->reg+0,2,xt_shr(xt_read(s->reg+0,2),UINT64_C(0x1),2));
xt_write(t+7,1,(xt_read(s->reg+49,1) & UINT64_C(0xfb)));
xt_write(t+6,1,(xt_read(s->reg+0,2) == UINT64_C(0x0)));
xt_write(t+8,1,xt_shl(xt_read(t+6,1),UINT64_C(0x2),1));
xt_write(s->reg+49,1,(xt_read(t+7,1) | xt_read(t+8,1)));
xt_write(t+9,1,(xt_read(s->reg+49,1) & UINT64_C(0xf7)));
xt_write(t+10,1,xt_shl(UINT64_C(0x0),UINT64_C(0x3),1));
xt_write(s->reg+49,1,(xt_read(t+9,1) | xt_read(t+10,1)));
xt_write(t+1,1,(xt_read(s->reg+49,1) & UINT64_C(0xfd)));
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+2,1,xt_shl(xt_read(t+0,1),UINT64_C(0x1),1));
xt_write(s->reg+49,1,(xt_read(t+1,1) | xt_read(t+2,1)));
s->pc=0x69a8;return XT_OK;
}
case 0x69a8: { /* 7c0bb0 | STD 0xbb0 | FUN_6996 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0xbb0));
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
s->pc=0x69ab;return XT_OK;
}
case 0x69ab: { /* b60d55 | LDAA 0xd55 | FUN_6996 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xd55));
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
s->pc=0x69ae;return XT_OK;
}
case 0x69ae: { /* 8180 | CMPA #0x80 | FUN_6996 */
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
s->pc=0x69b0;return XT_OK;
}
case 0x69b0: { /* 2604 | BNE 0x69b6 | FUN_6996 */
uint8_t t[3];
xt_write(t+0,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+1,1,(xt_read(t+0,1) & UINT64_C(0x1)));
xt_write(t+2,1,(xt_read(t+1,1) == UINT64_C(0x0)));
if(xt_read(t+2,1)){s->pc=0x69b6;return XT_OK;}
s->pc=0x69b2;return XT_OK;
}
case 0x69b2: { /* 182000b2 | LBRA 0x6a68 | FUN_6996 */
s->pc=0x6a68;return XT_OK;
s->pc=0x69b6;return XT_OK;
}
case 0x69b6: { /* fc08ca | LDD 0x8ca | FUN_6996 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x8ca));
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
s->pc=0x69b9;return XT_OK;
}
case 0x69b9: { /* 1e08a004f4 | BRSET 0x8a0,0x4,0x69b2 | FUN_6996 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8a0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x4)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x69b2;return XT_OK;}
s->pc=0x69be;return XT_OK;
}
case 0x69be: { /* 1e08b280ef | BRSET 0x8b2,0x80,0x69b2 | FUN_6996 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8b2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x80)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x69b2;return XT_OK;}
s->pc=0x69c3;return XT_OK;
}
case 0x69c3: { /* 810a | CMPA #0xa | FUN_6996 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0xa));
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
s->pc=0x69c5;return XT_OK;
}
case 0x69c5: { /* 2563 | BCS 0x6a2a | FUN_6996 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x1)));
if(xt_read(t+1,1)){s->pc=0x6a2a;return XT_OK;}
s->pc=0x69c7;return XT_OK;
}
case 0x69c7: { /* 81f6 | CMPA #0xf6 | FUN_6996 */
uint8_t t[13];
xt_write(t+3,1,UINT64_C(0xf6));
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
s->pc=0x69c9;return XT_OK;
}
case 0x69c9: { /* 245f | BCC 0x6a2a | FUN_6996 */
uint8_t t[2];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,(xt_read(t+0,1) == UINT64_C(0x0)));
if(xt_read(t+1,1)){s->pc=0x6a2a;return XT_OK;}
s->pc=0x69cb;return XT_OK;
}
case 0x69cb: { /* 1f08b58008 | BRCLR 0x8b5,0x80,0x69d8 | FUN_6996 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x8b5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x80)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x69d8;return XT_OK;}
s->pc=0x69d0;return XT_OK;
}
case 0x69d0: { /* 1d08b580 | BCLR 0x8b5,0x80 | FUN_6996 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8b5));
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
s->pc=0x69d4;return XT_OK;
}
case 0x69d4: { /* 18200090 | LBRA 0x6a68 | FUN_6996 */
s->pc=0x6a68;return XT_OK;
s->pc=0x69d8;return XT_OK;
}
case 0x69d8: { /* b60b4d | LDAA 0xb4d | FUN_6996 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb4d));
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
s->pc=0x69db;return XT_OK;
}
case 0x69db: { /* b10d8a | CMPA 0xd8a | FUN_6996 */
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
s->pc=0x69de;return XT_OK;
}
case 0x69de: { /* 18230086 | LBLS 0x6a68 | FUN_6996 */
uint8_t t[5];
xt_write(t+0,1,(xt_read(s->reg+49,1) & UINT64_C(0x1)));
xt_write(t+1,1,xt_shr(xt_read(s->reg+49,1),UINT64_C(0x2),1));
xt_write(t+2,1,(xt_read(t+1,1) & UINT64_C(0x1)));
xt_write(t+3,1,(xt_read(t+0,1) | xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x1)));
if(xt_read(t+4,1)){s->pc=0x6a68;return XT_OK;}
s->pc=0x69e2;return XT_OK;
}
case 0x69e2: { /* 1f08af0823 | BRCLR 0x8af,0x8,0x6a0a | FUN_6996 */
uint8_t t[5];
xt_write(t+0,2,UINT64_C(0x8af));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(xt_read(t+2,1) & UINT64_C(0x8)));
xt_write(t+4,1,(xt_read(t+3,1) == UINT64_C(0x0)));
if(xt_read(t+4,1)){s->pc=0x6a0a;return XT_OK;}
s->pc=0x69e7;return XT_OK;
}
case 0x69e7: { /* 1d08af08 | BCLR 0x8af,0x8 | FUN_6996 */
uint8_t t[13];
xt_write(t+0,2,UINT64_C(0x8af));
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
s->pc=0x69eb;return XT_OK;
}
case 0x69eb: { /* 1c0bd280 | BSET 0xbd2,0x80 | FUN_6996 */
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
s->pc=0x69ef;return XT_OK;
}
case 0x69ef: { /* 1e08af0416 | BRSET 0x8af,0x4,0x6a0a | FUN_6996 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8af));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x4)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x6a0a;return XT_OK;}
s->pc=0x69f4;return XT_OK;
}
case 0x69f4: { /* 1e08b10811 | BRSET 0x8b1,0x8,0x6a0a | FUN_6996 */
uint8_t t[6];
xt_write(t+0,2,UINT64_C(0x8b1));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,(~xt_read(t+2,1)));
xt_write(t+4,1,(xt_read(t+3,1) & UINT64_C(0x8)));
xt_write(t+5,1,(xt_read(t+4,1) != UINT64_C(0x0)));
if(xt_read(t+5,1)){s->pc=0x6a0a;return XT_OK;}
s->pc=0x69f9;return XT_OK;
}
case 0x69f9: { /* 1c088902 | BSET 0x889,0x2 | FUN_6996 */
uint8_t t[12];
xt_write(t+0,2,UINT64_C(0x889));
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
s->pc=0x69fd;return XT_OK;
}
case 0x69fd: { /* 87 | CLRA | FUN_6996 */
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
s->pc=0x69fe;return XT_OK;
}
case 0x69fe: { /* 7a0b94 | STAA 0xb94 | FUN_6996 */
uint8_t t[11];
xt_write(t+0,2,UINT64_C(0xb94));
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
s->pc=0x6a01;return XT_OK;
}
default:return XT_UNDECODED;}}
