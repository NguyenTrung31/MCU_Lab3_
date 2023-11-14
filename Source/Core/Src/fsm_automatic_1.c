/*
 * fsm_automatic_1.c
 *
 *  Created on: Nov 14, 2023
 *      Author: trung
 */


#include <fsm_automatic_1.h>

void fsm_automatic_1_run(){
	switch (status_ver){
	case INIT:
		SetOffVer();
		led12 = timered;
		status_ver = AUTO_RED;
		setTimer1(timeTimer(timered));
		break;
	case AUTO_RED:
		SetRedVer();
		if (timer1_flag == 1){
			status_ver = AUTO_GREEN;
			led12 = timegreen;
			setTimer1(timeTimer(timegreen));
		}
		break;
	case AUTO_GREEN:
		SetGreenVer();
		if (timer1_flag == 1){
			status_ver = AUTO_YELLOW;
			led12 = timeyellow;
			setTimer1(timeTimer(timeyellow));
		}
		break;
	case AUTO_YELLOW:
		SetYellowVer();
		if (timer1_flag == 1){
			status_ver = AUTO_RED;
			led12 = timered;
			setTimer1(timeTimer(timered));
		}
		break;
	case MODIFY_RED:
		if (timer1_flag == 1){
			BlinkyRedVer();
			setTimer1(500);
		}
		break;
	case MODIFY_GREEN:
		if (timer1_flag == 1){
			BlinkyGreenVer();
			setTimer1(500);
		}
		break;
	case MODIFY_YELLOW:
		if (timer1_flag == 1){
			BlinkyYellowVer();
			setTimer1(500);
		}
		break;
	default:
		break;
	}

}
