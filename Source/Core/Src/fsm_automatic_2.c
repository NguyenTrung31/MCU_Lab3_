/*
 * fsm_automatic_2.c
 *
 *  Created on: Nov 14, 2023
 *      Author: trung
 */


#include "fsm_automatic_2.h"

void fsm_automatic_2_run(){
	switch (status_hor){
	case INIT:
		SetOffHor();
		led34 = timegreen;
		status_hor = AUTO_GREEN;
		setTimer2(timeTimer(timegreen));
		break;
	case AUTO_RED :
		SetRedHor();
		if (timer2_flag == 1){
			status_hor = AUTO_GREEN;
			led34 = timegreen;
			setTimer2(timeTimer(timegreen));
		}

		break;
	case AUTO_GREEN:

		SetGreenHor();
		if (timer2_flag == 1){
			status_hor = AUTO_YELLOW;
			led34 = timeyellow;
			setTimer2(timeTimer(timeyellow));
		}

		break;
	case AUTO_YELLOW:
		SetYellowHor();
		if (timer2_flag == 1){
			status_hor = AUTO_RED;
			led34 = timered;
			setTimer2(timeTimer(timered));
		}
		break;
	case MODIFY_RED:
		if (timer2_flag == 1){
			BlinkyRedHor();
			setTimer2(500);
		}
		break;
	case MODIFY_GREEN:
		if (timer2_flag == 1){
			BlinkyGreenHor();
			setTimer2(500);
		}
		break;
	case MODIFY_YELLOW:
		if (timer2_flag == 1){
			BlinkyYellowHor();
			setTimer2(500);
		}
		break;
	default:
		break;
	}

}
