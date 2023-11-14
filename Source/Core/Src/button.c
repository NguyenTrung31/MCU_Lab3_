/*
 * button.c
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#include "button.h"

#define NUMBER_OF_BUTTON 	3

int KeyReg0[NUMBER_OF_BUTTON] = {NORMAL_STATE};
int KeyReg1[NUMBER_OF_BUTTON] = {NORMAL_STATE};
int KeyReg2[NUMBER_OF_BUTTON] = {NORMAL_STATE};

int KeyReg3[NUMBER_OF_BUTTON] = {NORMAL_STATE};

int TimeOutForKeyPress[NUMBER_OF_BUTTON] = {100};

int button_flag[NUMBER_OF_BUTTON] = {0};

void getKeyInput(){
	for (int i = 0; i < NUMBER_OF_BUTTON; i++){
		  KeyReg2[i] = KeyReg1[i];
		  KeyReg1[i] = KeyReg0[i];
		  switch (i){
		  case 0: // read data from Button 1
			  KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
			  break;
		  case 1: // read data from Button 2
			  KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
			  break;
		  case 2: // read data from Button 1
			  KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
			  break;
		  default:
			  KeyReg0[i] = NORMAL_STATE;
			  break;
		  }

		  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){// nhan tha
			  KeyReg3[i] = KeyReg2[i];
			  if (KeyReg3[i] == PRESSED_STATE){
				TimeOutForKeyPress[i] = 100;
				//subKeyProcess();
				button_flag[i] = 1;
			  }
			}else{ // nhan de
			   TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0){
				  KeyReg3[i] = NORMAL_STATE;
				}
			}
		  }
	}
}
