#include "xt660_lift.h"
int xt_page_60(xt_state *s){switch(s->pc){
case 0x6004: { /* 180c4e6d0d58 | MOVB 0x4e6d,0xd58 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e6d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd58));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x600a;return XT_OK;
}
case 0x600a: { /* 180c4e6e0d59 | MOVB 0x4e6e,0xd59 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e6e));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd59));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6010;return XT_OK;
}
case 0x6010: { /* 180c4e6f0d5a | MOVB 0x4e6f,0xd5a | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e6f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5a));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6016;return XT_OK;
}
case 0x6016: { /* 180c4e700d5b | MOVB 0x4e70,0xd5b | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e70));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5b));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x601c;return XT_OK;
}
case 0x601c: { /* 180c4e710d5c | MOVB 0x4e71,0xd5c | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e71));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5c));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6022;return XT_OK;
}
case 0x6022: { /* 180c4e720d5d | MOVB 0x4e72,0xd5d | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e72));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5d));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6028;return XT_OK;
}
case 0x6028: { /* 180c4e730d5e | MOVB 0x4e73,0xd5e | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e73));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5e));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x602e;return XT_OK;
}
case 0x602e: { /* 180c4e740d5f | MOVB 0x4e74,0xd5f | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e74));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd5f));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6034;return XT_OK;
}
case 0x6034: { /* 180c4e750d60 | MOVB 0x4e75,0xd60 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e75));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd60));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x603a;return XT_OK;
}
case 0x603a: { /* 180c4e760d61 | MOVB 0x4e76,0xd61 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e76));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd61));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6040;return XT_OK;
}
case 0x6040: { /* 180c4e770d62 | MOVB 0x4e77,0xd62 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e77));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd62));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6046;return XT_OK;
}
case 0x6046: { /* 180c4e780d63 | MOVB 0x4e78,0xd63 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e78));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd63));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x604c;return XT_OK;
}
case 0x604c: { /* 180c4e790d64 | MOVB 0x4e79,0xd64 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e79));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd64));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6052;return XT_OK;
}
case 0x6052: { /* 180c4e7a0d65 | MOVB 0x4e7a,0xd65 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e7a));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd65));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6058;return XT_OK;
}
case 0x6058: { /* 180c4e900d66 | MOVB 0x4e90,0xd66 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e90));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd66));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x605e;return XT_OK;
}
case 0x605e: { /* 180c18de0d67 | MOVB 0x18de,0xd67 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18de));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd67));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6064;return XT_OK;
}
case 0x6064: { /* 180c4bee0d68 | MOVB 0x4bee,0xd68 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bee));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd68));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x606a;return XT_OK;
}
case 0x606a: { /* 180c4bef0d69 | MOVB 0x4bef,0xd69 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bef));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd69));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6070;return XT_OK;
}
case 0x6070: { /* 180c4bf00d6a | MOVB 0x4bf0,0xd6a | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6a));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6076;return XT_OK;
}
case 0x6076: { /* 180c4bf10d6b | MOVB 0x4bf1,0xd6b | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf1));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6b));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x607c;return XT_OK;
}
case 0x607c: { /* 180c4bf20d6c | MOVB 0x4bf2,0xd6c | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6c));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6082;return XT_OK;
}
case 0x6082: { /* 180c4bf30d6d | MOVB 0x4bf3,0xd6d | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf3));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6d));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6088;return XT_OK;
}
case 0x6088: { /* 180c4bf40d6e | MOVB 0x4bf4,0xd6e | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf4));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6e));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x608e;return XT_OK;
}
case 0x608e: { /* 180c4bf50d6f | MOVB 0x4bf5,0xd6f | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd6f));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6094;return XT_OK;
}
case 0x6094: { /* 180c4bf60d70 | MOVB 0x4bf6,0xd70 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf6));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd70));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x609a;return XT_OK;
}
case 0x609a: { /* 180c4bf70d71 | MOVB 0x4bf7,0xd71 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf7));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd71));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60a0;return XT_OK;
}
case 0x60a0: { /* 180c4bf80d72 | MOVB 0x4bf8,0xd72 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bf8));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd72));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60a6;return XT_OK;
}
case 0x60a6: { /* 180c4bfa0d73 | MOVB 0x4bfa,0xd73 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bfa));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd73));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60ac;return XT_OK;
}
case 0x60ac: { /* 180c4bfb0d74 | MOVB 0x4bfb,0xd74 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bfb));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd74));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60b2;return XT_OK;
}
case 0x60b2: { /* 180c4e550d75 | MOVB 0x4e55,0xd75 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e55));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd75));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60b8;return XT_OK;
}
case 0x60b8: { /* 180c4e540d76 | MOVB 0x4e54,0xd76 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e54));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd76));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60be;return XT_OK;
}
case 0x60be: { /* 180c4e560d77 | MOVB 0x4e56,0xd77 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e56));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd77));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60c4;return XT_OK;
}
case 0x60c4: { /* 180c4e530d78 | MOVB 0x4e53,0xd78 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e53));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd78));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60ca;return XT_OK;
}
case 0x60ca: { /* 180c18dc0d79 | MOVB 0x18dc,0xd79 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18dc));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd79));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60d0;return XT_OK;
}
case 0x60d0: { /* 180c18dd0d7a | MOVB 0x18dd,0xd7a | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18dd));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7a));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60d6;return XT_OK;
}
case 0x60d6: { /* 180c18e40d7b | MOVB 0x18e4,0xd7b | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18e4));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7b));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60dc;return XT_OK;
}
case 0x60dc: { /* 180c423e0d7c | MOVB 0x423e,0xd7c | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x423e));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7c));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60e2;return XT_OK;
}
case 0x60e2: { /* 180c423f0d7d | MOVB 0x423f,0xd7d | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x423f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7d));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60e8;return XT_OK;
}
case 0x60e8: { /* 180c18e20d7e | MOVB 0x18e2,0xd7e | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18e2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7e));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60ee;return XT_OK;
}
case 0x60ee: { /* 180c4bd70d7f | MOVB 0x4bd7,0xd7f | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bd7));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd7f));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60f4;return XT_OK;
}
case 0x60f4: { /* 180c4bd80d80 | MOVB 0x4bd8,0xd80 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bd8));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd80));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x60fa;return XT_OK;
}
case 0x60fa: { /* 180c4bd90d81 | MOVB 0x4bd9,0xd81 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bd9));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd81));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6100;return XT_OK;
}
default:return XT_UNDECODED;}}
