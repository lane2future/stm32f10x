#ifndef _SYS_H
#define _SYS_H
#include "lane_stm32f10x.h"
#include "stm32f10x.h"

/* BITBAND formula */
#define BITBAND(addr, bitnum) ((addr & 0xF0000000) + 0x2000000 + ((addr & 0xFFFFF)<<5) + (bitnum << 2))
#define MEM_ADDR(addr) *((volatile u32 *)(addr))


#define GPIOA_IDR (0x40010800+0x8)
#define GPIOA_ODR (0x40010800+0xC)
#define GPIOB_IDR (0x40010C00+0x8)
#define GPIOB_ODR (0x40010C00+0xC)
#define GPIOC_IDR (0x40011000+0x8)
#define GPIOC_ODR (0x40011000+0xC)
#define GPIOD_IDR (0x40011400+0x8)
#define GPIOD_ODR (0x40011400+0xC)
#define GPIOE_IDR (0x40011800+0x8)
#define GPIOE_ODR (0x40011800+0xC)
#define GPIOF_IDR (0x40011C00+0x8)
#define GPIOF_ODR (0x40011C00+0xC)
#define GPIOG_IDR (0x40012000+0x8)
#define GPIOG_ODR (0x40012000+0xC)


//#define PAout(addr,bitnum) MEM_ADDR(BITBAND(addr, bitnum)) 以下是优化后的宏定义
#define PAout(bitnum)	MEM_ADDR(BITBAND(GPIOA_ODR, bitnum)) 
#define PAin(bitnum)	MEM_ADDR(BITBAND(GPIOA_IDR, bitnum))
#define PBout(bitnum)	MEM_ADDR(BITBAND(GPIOB_ODR, bitnum)) 
#define PBin(bitnum)	MEM_ADDR(BITBAND(GPIOB_IDR, bitnum))
#define PCout(bitnum)	MEM_ADDR(BITBAND(GPIOC_ODR, bitnum)) 
#define PCin(bitnum)	MEM_ADDR(BITBAND(GPIOC_IDR, bitnum))
#define PDout(bitnum)	MEM_ADDR(BITBAND(GPIOD_ODR, bitnum)) 
#define PDin(bitnum)	MEM_ADDR(BITBAND(GPIOD_IDR, bitnum))
#define PEout(bitnum)	MEM_ADDR(BITBAND(GPIOE_ODR, bitnum)) 
#define PEin(bitnum)	MEM_ADDR(BITBAND(GPIOE_IDR, bitnum))
#define PFout(bitnum)	MEM_ADDR(BITBAND(GPIOF_ODR, bitnum)) 
#define PFin(bitnum)	MEM_ADDR(BITBAND(GPIOF_IDR, bitnum))
#define PGout(bitnum)	MEM_ADDR(BITBAND(GPIOG_ODR, bitnum)) 
#define PGin(bitnum)	MEM_ADDR(BITBAND(GPIOG_IDR, bitnum))






#endif
