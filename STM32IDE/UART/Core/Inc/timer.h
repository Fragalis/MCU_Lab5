/*
 * timer.h
 *
 *  Created on: Dec 18, 2023
 *      Author: ACER
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#include "global.h"

extern uint32_t counter;
extern uint8_t flag;

void setTimer(uint32_t duration);
void timer_run(void);

#endif /* INC_TIMER_H_ */
