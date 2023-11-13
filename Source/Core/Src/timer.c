/*
 * timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */


#include <software_timer.h>
#include "main.h"
#include "input_reading.h"
#include "button.h"


void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
	if(htim->Instance == TIM2 ){
		button_reading();
		timerRun();
	}
}
