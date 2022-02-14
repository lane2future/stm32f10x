#ifndef KEY_H_
#define KEY_H_
#include "stm32f10x.h"
#include "lane_stm32f10x.h"
#include "sys.h"
#define WAKE_UP             PAin(0)
#define KEY0                PEin(4)
#define KEY1                PEin(3)
#define KEY2                PEin(2)


void key_init(void);
u8 key_debounce(void);
#endif
