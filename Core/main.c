#include "led.h"
#include "beep.h"
#include "key.h"
#include "sys.h"

int main(void)
{
	u8 key = 0;
	u32 i = 0;
	led_init();
	beep_init();
	key_init();
	while(1)
	{
		
		key = key_debounce();
		if(key == 1)
		{
			LED0 = 0;//LED1 = 0;
			DelayMs(500);
			LED0 = 1;//LED1 = 1;
			DelayMs(500);
			LED0 = 0;//LED1 = 0;
			DelayMs(500);
			LED0 = 1;//LED1 = 1;
			DelayMs(500);
			LED0 = 0;//LED1 = 0;
			DelayMs(500);
			LED0 = 1;//LED1 = 1;
		}
		else if(key == 2)
		{
			LED1 = 0;
			LED0 = 0;
		}
		else if(key == 3)
		{
						LED1 = 1;
			LED0 = 1;
		}
	}
}
