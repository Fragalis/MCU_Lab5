/*
 * timer.c
 *
 *  Created on: Dec 18, 2023
 *      Author: ACER
 */

#include "timer.h"

uint32_t counter= 0;
uint8_t flag = 0;

void setTimer(uint32_t duration) {
	counter = duration;
	flag = 0;
}
void timer_run(void) {
	--counter;
	if(counter <= 0) {
		flag = 1;
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2) {
		timer_run();
	}
}
