#ifndef LED_H_
#define LED_H_
#include "stm32f10x.h"
#include "lane_stm32f10x.h"
#include "sys.h"
#include "delay.h"
#define LED0                PBout(5)
#define LED1                PEout(5)
void led_init(void);
#endif
