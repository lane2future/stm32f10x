#ifndef BEEP_H_
#define BEEP_H_
#include "stm32f10x.h"
#include "lane_stm32f10x.h"
#include "sys.h"
#include "delay.h"
#define BEEP                PBout(8)
void beep_init(void);
#endif
