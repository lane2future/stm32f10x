#include "beep.h"

/***************************************
 *
 * initialize BEEP
 *
 * @param	none.
 *
 * @return	node.
 *
 * @note	BEEP-->PB8
 **************************************/
void beep_init(void)
{
    RCC->APB2ENR |= 1<<3;
    
    GPIOB->CRH &= 0xFFFFFFF0;
    GPIOB->CRH |= 0x00000003;

    GPIOB->ODR &= ~(1<<8);
}
