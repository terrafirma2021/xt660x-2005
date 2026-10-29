#ifndef XT660_LIFT_H
#define XT660_LIFT_H
#include <stdint.h>
#include <stddef.h>
/* Big-endian CPU12 register byte locations: A=0, B=1, D=0..1,
   X=16..17, Y=18..19, SP=42..43, CCR=49. */
typedef struct xt_state { uint8_t ram[65536]; uint8_t reg[64]; uint16_t pc; } xt_state;
enum { XT_OK=0, XT_UNDECODED=1, XT_MISSING_BOOT=2, XT_DIVZERO=3 };
int xt_step(xt_state *s);
uint64_t xt_run(xt_state *s, uint64_t budget, int *status);
/* Pure instruction semantics: host supplies RAM/IO state between steps.
   Interrupt delivery, timer progression and external peripherals are not simulated. */
static inline uint64_t xt_mask(unsigned n) { return n==8?UINT64_MAX:((UINT64_C(1)<<(n*8))-1); }
static inline uint64_t xt_read(const uint8_t *p,unsigned n) { uint64_t v=0; for(unsigned i=0;i<n;i++)v=(v<<8)|p[i];return v; }
static inline void xt_write(uint8_t *p,unsigned n,uint64_t v) { for(unsigned i=n;i;i--){p[i-1]=(uint8_t)v;v>>=8;} }
static inline uint64_t xt_load(xt_state *s,uint64_t a,unsigned n) {uint64_t v=0;for(unsigned i=0;i<n;i++)v=(v<<8)|s->ram[(uint16_t)(a+i)];return v;}
static inline void xt_store(xt_state *s,uint64_t a,unsigned n,uint64_t v){for(unsigned i=n;i;i--){s->ram[(uint16_t)(a+i-1)]=(uint8_t)v;v>>=8;}}
static inline uint64_t xt_shl(uint64_t x,uint64_t y,unsigned n){return y>=n*8?0:(x<<y)&xt_mask(n);}
static inline uint64_t xt_shr(uint64_t x,uint64_t y,unsigned n){return y>=n*8?0:x>>y;}
static inline uint64_t xt_sless(uint64_t x,uint64_t y,unsigned n){uint64_t sign=UINT64_C(1)<<(n*8-1);return (x^sign)<(y^sign);}
static inline uint64_t xt_carry(uint64_t x,uint64_t y,unsigned n){return x>xt_mask(n)-y;}
static inline uint64_t xt_scarry(uint64_t x,uint64_t y,unsigned n){return ((~(x^y)&(x^(x+y)))>>(n*8-1))&1;}
static inline uint64_t xt_sborrow(uint64_t x,uint64_t y,unsigned n){return (((x^y)&(x^(x-y)))>>(n*8-1))&1;}
#endif
