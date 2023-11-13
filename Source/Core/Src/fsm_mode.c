/*
 * fsm_mode.c
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */


#include <fsm_mode.h>

void fsm_mode_run(){
	switch (status_mode){
	case INIT:
		status_mode = MODE1;
		break;
	case MODE1 :
		if (isButtonflag(but1) == 1){
			status_mode = MODE2;
			setTimer0(1000);
		}
		break;
	case MODE2:
		if (isButtonflag(but1) == 1){
			status_mode = MODE3;
			setTimer0(1000);
		}
		break;
	case MODE3:
		if (isButtonflag(but1) == 1){
			status_mode = MODE4;
			setTimer0(1000);
		}
		break;
	case MODE4:
		if (isButtonflag(but1) == 1){
			status_mode = MODE1;
			setTimer0(1000);
		}
		break;
	default:
		break;
	}


}
