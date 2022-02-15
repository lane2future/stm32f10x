#include "key.h"
#include "delay.h"
#include "led.h"
/***************************************
 *
 * initialize KEY
 *
 * @param	none.
 *
 * @return	node.
 *
 * @note	KEY_UP-->PA0.
 *          KEY0-->PE4.
 *          KEY1-->PE3.
 *          KEY2-->PE2.
 **************************************/
void key_init(void)
{
	RCC->APB2ENR |= 1<<2;
    RCC->APB2ENR |= 1<<6;

    GPIO_A->CRL &= 0xFFFFFFF0;
    GPIO_A->CRL |= 0x00000008;
    GPIO_E->CRL &= 0xFFF000FF;
    GPIO_E->CRL |= 0x00088800;

    GPIO_A->ODR &= ~(1<<0);
    GPIO_E->ODR |= 7<<2;
}

/***************************************
 *
 * KEY debounce
 *
 * @param	none.
 *
 * @return	which key
 *
 * @note	
 **************************************/
u8 key_debounce(void)
{
    static u8 key_flag = 0;
    if((KEY0 == 0 || KEY1 == 0 || KEY2 ==0)&& key_flag == 0)
    {
        DelayMs(30);
        //if(KEY0 == 0 || KEY1 == 0 || KEY2 ==0)
        {
            
            key_flag = 1;
            if(KEY0 == 0)return 1;
            else if(KEY1 == 0)return 2;
            else if(KEY2 == 0)return 3;
        }
        
    }
    else if(KEY0 && KEY1 && KEY2)
    {
        key_flag = 0;
    }
	return 0;
}
