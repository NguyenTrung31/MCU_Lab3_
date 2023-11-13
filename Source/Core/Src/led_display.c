/*
 * led_display.c
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#include "led_display.h"
#include "main.h"


void display7SEG(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	default :
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	}
}

const int MAX_LED = 4;
int led_buffer[4] = {0, 0, 0, 0};
void update7SEG(int index){
    switch (index){
		case 0: {
			display7SEG(led_buffer[index]);
			break ;
		}
		case 1:{
			display7SEG(led_buffer[index]);
			break ;
		}
		case 2:{
			display7SEG(led_buffer[index]);
			break ;
		}
		case 3:{
			display7SEG(led_buffer[index]);
			break ;
		}
		default :
			break;
    }
}

void SetOffVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetRedVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetGreenVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetYellowVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_RESET);
}


void SetOffHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetRedHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetGreenHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetYellowHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_RESET);
}
