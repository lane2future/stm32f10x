#ifndef _LANE_STM32F10X_H
#define _LANE_STM32F10X_H
#include "stm32f10x.h"
#ifdef __cplusplus
    extern "C" {
#endif

/* Peripheral Base  */
#define PERIPHERAL_ADDR            ((u32)0x40000000)
/* APB2 base address */
#define APB2_ADDR           (PERIPHERAL_ADDR + 10000)
/* Each GPIO address  */
#define GPIO_A_BASE               (APB2_ADDR + 0x0800)
#define GPIO_B_BASE               (APB2_ADDR + 0x0C00)
#define GPIO_C_BASE               (APB2_ADDR + 0x1000)
#define GPIO_D_BASE               (APB2_ADDR + 0x1400)
#define GPIO_E_BASE               (APB2_ADDR + 0x1800)
#define GPIO_F_BASE               (APB2_ADDR + 0x1C00)
#define GPIO_G_BASE               (APB2_ADDR + 0x2000)

typedef struct
{
    volatile u32 CRL;
    volatile u32 CRH;
    volatile u32 IDR;
    volatile u32 ODR;
    volatile u32 BSRR;
    volatile u32 BRR;
    volatile u32 LCKR;
}GPIO_Typedef;

#define GPIO_A                  ((GPIO_Typedef *)GPIO_A_BASE)
#define GPIO_B                  ((GPIO_Typedef *)GPIO_B_BASE)
#define GPIO_C                  ((GPIO_Typedef *)GPIO_C_BASE)
#define GPIO_D                  ((GPIO_Typedef *)GPIO_D_BASE)
#define GPIO_E                  ((GPIO_Typedef *)GPIO_E_BASE)
#define GPIO_F                  ((GPIO_Typedef *)GPIO_F_BASE)
#define GPIO_G                  ((GPIO_Typedef *)GPIO_G_BASE)


#endif 
