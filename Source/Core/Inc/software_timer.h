/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
void clearTimer0();
void setTimer0(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
