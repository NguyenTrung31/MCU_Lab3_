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
		status_ver = INIT;
		status_hor = INIT;
		status_led7seg = INIT;
		index_led = 0;
		break;
	case MODE1 :
		if (isButtonflag(but1) == 1){
			clearTimer1();
			clearTimer2();
			clearTimer3();
			status_mode = MODE2;
			SetRedVerHor(); // to when blinky, led red ver and hor are the same
			status_ver = MODIFY_RED;
			status_hor = MODIFY_RED;
			led12 = MODE2;
			led34 = timered;
			status_led7seg = MODE_MODIFY_led7seg_1;
		}
		break;
	case MODE2:

		if (isButtonflag(but1) == 1){
			clearTimer1();
			clearTimer2();
			clearTimer3();
			status_mode = MODE3;
			status_ver = MODIFY_YELLOW;
			status_hor = MODIFY_YELLOW;
			led12 = MODE3;
			led34 = timeyellow;
			status_led7seg = MODE_MODIFY_led7seg_1;
		}
		if (isButtonflag(but2) == 1){
			led34++;
			if (led34 > 99){
				led34 = 0;
			}
		}
		if (isButtonflag(but3) == 1){
			timered  = led34;
		}
		break;
	case MODE3:

		if (isButtonflag(but1) == 1){
			clearTimer1();
			clearTimer2();
			clearTimer3();
			status_mode = MODE4;
			status_ver = MODIFY_GREEN;
			status_hor = MODIFY_GREEN;
			led12 = MODE4;
			led34 = timegreen;
			status_led7seg = MODE_MODIFY_led7seg_1;
		}
		if (isButtonflag(but2) == 1){
			led34++;
			if (led34 > 99){
				led34 = 0;
			}
		}
		if (isButtonflag(but3) == 1){
			timeyellow  = led34;
		}

		break;
	case MODE4:
		if (isButtonflag(but1) == 1){
			clearTimer1();
			clearTimer2();
			clearTimer3();
			status_mode = INIT;

		}
		if (isButtonflag(but2) == 1){
			led34++;
			if (led34 > 99){
				led34 = 0;
			}
		}
		if (isButtonflag(but3) == 1){
			timegreen = led34;
		}
		break;
	default:
		break;
	}


}
