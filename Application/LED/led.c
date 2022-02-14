#include "led.h"

/***************************************
 *
 * initialize LED
 *
 * @param	none.
 *
 * @return	node.
 *
 * @note	LED0-->PB5.
 *          LED1-->PE5.
 **************************************/
void led_init(void)
{
    RCC->APB2ENR |= 1<<3;
    RCC->APB2ENR |= 1<<6;
    GPIOB->CRL &= 0xFF0FFFFF;
    GPIOB->CRL |= 0x00300000;
    GPIOE->CRL &= 0xFF0FFFFF;
    GPIOE->CRL |= 0x00300000;

    GPIOB->ODR |= 1<<5;
    GPIOE->ODR |= 1<<5;
}
