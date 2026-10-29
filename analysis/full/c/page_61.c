#include "xt660_lift.h"
int xt_page_61(xt_state *s){switch(s->pc){
case 0x6100: { /* 180c4bda0d82 | MOVB 0x4bda,0xd82 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bda));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd82));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6106;return XT_OK;
}
case 0x6106: { /* 180c4bdb0d83 | MOVB 0x4bdb,0xd83 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bdb));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd83));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x610c;return XT_OK;
}
case 0x610c: { /* 180c4bdc0d84 | MOVB 0x4bdc,0xd84 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bdc));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd84));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6112;return XT_OK;
}
case 0x6112: { /* 180c4bdd0d85 | MOVB 0x4bdd,0xd85 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bdd));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd85));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6118;return XT_OK;
}
case 0x6118: { /* 180c4bde0d86 | MOVB 0x4bde,0xd86 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4bde));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd86));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x611e;return XT_OK;
}
case 0x611e: { /* 180c18d30d87 | MOVB 0x18d3,0xd87 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18d3));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd87));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6124;return XT_OK;
}
case 0x6124: { /* 180c4e580d88 | MOVB 0x4e58,0xd88 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e58));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd88));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x612a;return XT_OK;
}
case 0x612a: { /* 180c4e3f0d8a | MOVB 0x4e3f,0xd8a | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e3f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8a));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6130;return XT_OK;
}
case 0x6130: { /* 180c4e3d0d89 | MOVB 0x4e3d,0xd89 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e3d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd89));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6136;return XT_OK;
}
case 0x6136: { /* 180c18ce0d8b | MOVB 0x18ce,0xd8b | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18ce));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8b));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x613c;return XT_OK;
}
case 0x613c: { /* 180c18440d8c | MOVB 0x1844,0xd8c | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1844));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8c));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6142;return XT_OK;
}
case 0x6142: { /* 180c18450d8d | MOVB 0x1845,0xd8d | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1845));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8d));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6148;return XT_OK;
}
case 0x6148: { /* 180c18460d8e | MOVB 0x1846,0xd8e | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1846));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8e));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x614e;return XT_OK;
}
case 0x614e: { /* 180c18470d8f | MOVB 0x1847,0xd8f | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1847));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd8f));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6154;return XT_OK;
}
case 0x6154: { /* 180c18480d90 | MOVB 0x1848,0xd90 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1848));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd90));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x615a;return XT_OK;
}
case 0x615a: { /* 180c18490d91 | MOVB 0x1849,0xd91 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1849));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd91));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6160;return XT_OK;
}
case 0x6160: { /* 180c184a0d92 | MOVB 0x184a,0xd92 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184a));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd92));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6166;return XT_OK;
}
case 0x6166: { /* 180c184b0d93 | MOVB 0x184b,0xd93 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd93));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x616c;return XT_OK;
}
case 0x616c: { /* 180c184c0d94 | MOVB 0x184c,0xd94 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184c));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd94));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6172;return XT_OK;
}
case 0x6172: { /* 180c184d0d95 | MOVB 0x184d,0xd95 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd95));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6178;return XT_OK;
}
case 0x6178: { /* 180c184e0d96 | MOVB 0x184e,0xd96 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184e));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd96));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x617e;return XT_OK;
}
case 0x617e: { /* 180c184f0d97 | MOVB 0x184f,0xd97 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x184f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd97));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6184;return XT_OK;
}
case 0x6184: { /* 180c18500d98 | MOVB 0x1850,0xd98 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1850));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd98));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x618a;return XT_OK;
}
case 0x618a: { /* 180c18510d99 | MOVB 0x1851,0xd99 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x1851));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd99));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6190;return XT_OK;
}
case 0x6190: { /* 180c18d20d9a | MOVB 0x18d2,0xd9a | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18d2));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9a));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6196;return XT_OK;
}
case 0x6196: { /* 180c18e30d9b | MOVB 0x18e3,0xd9b | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18e3));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9b));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x619c;return XT_OK;
}
case 0x619c: { /* 180c18e50d9c | MOVB 0x18e5,0xd9c | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18e5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9c));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61a2;return XT_OK;
}
case 0x61a2: { /* 180c4ba00d9e | MOVB 0x4ba0,0xd9e | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4ba0));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9e));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61a8;return XT_OK;
}
case 0x61a8: { /* 180c18c90d9f | MOVB 0x18c9,0xd9f | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18c9));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9f));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61ae;return XT_OK;
}
case 0x61ae: { /* 180c18ca0da0 | MOVB 0x18ca,0xda0 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18ca));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda0));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61b4;return XT_OK;
}
case 0x61b4: { /* 180c18cb0da1 | MOVB 0x18cb,0xda1 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18cb));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda1));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61ba;return XT_OK;
}
case 0x61ba: { /* 180c18cc0da2 | MOVB 0x18cc,0xda2 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18cc));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda2));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61c0;return XT_OK;
}
case 0x61c0: { /* 180c18cd0da3 | MOVB 0x18cd,0xda3 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18cd));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda3));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61c6;return XT_OK;
}
case 0x61c6: { /* 180c18e10d9d | MOVB 0x18e1,0xd9d | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x18e1));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xd9d));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61cc;return XT_OK;
}
case 0x61cc: { /* 180c357b0da4 | MOVB 0x357b,0xda4 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x357b));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda4));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61d2;return XT_OK;
}
case 0x61d2: { /* 180c357c0da5 | MOVB 0x357c,0xda5 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x357c));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda5));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61d8;return XT_OK;
}
case 0x61d8: { /* 180c189a0da6 | MOVB 0x189a,0xda6 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x189a));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xda6));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61de;return XT_OK;
}
case 0x61de: { /* 180c4e7d0dd5 | MOVB 0x4e7d,0xdd5 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e7d));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdd5));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61e4;return XT_OK;
}
case 0x61e4: { /* 180c4e7e0dd6 | MOVB 0x4e7e,0xdd6 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e7e));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdd6));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61ea;return XT_OK;
}
case 0x61ea: { /* 180c4e7f0dd7 | MOVB 0x4e7f,0xdd7 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e7f));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdd7));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61f0;return XT_OK;
}
case 0x61f0: { /* 180c4e850dd8 | MOVB 0x4e85,0xdd8 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e85));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdd8));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61f6;return XT_OK;
}
case 0x61f6: { /* 180c4be50dd9 | MOVB 0x4be5,0xdd9 | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4be5));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdd9));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x61fc;return XT_OK;
}
case 0x61fc: { /* 180c4e2c0dda | MOVB 0x4e2c,0xdda | FUN_5fc8 */
uint8_t t[4];
xt_write(t+0,2,UINT64_C(0x4e2c));
xt_write(t+2,1,xt_load(s,xt_read(t+0,2),1));
xt_write(t+3,1,xt_read(t+2,1));
xt_write(t+0,2,UINT64_C(0xdda));
xt_write(t+2,1,xt_read(t+3,1));
xt_store(s,xt_read(t+0,2),1,xt_read(t+2,1));
s->pc=0x6202;return XT_OK;
}
default:return XT_UNDECODED;}}
