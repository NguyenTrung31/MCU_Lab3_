/*
 * input_reading.c
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#include "main.h"
#include "input_reading.h"
// we aim to work with more than one buttons
#define N0_OF_BUTTONS 					3
// timer interrupt duration is 10ms , so to pass 1 second ,
// we need to jump to the interrupt service routine 100 time
#define DURATION_FOR_AUTO_INCREASING 	100

#define DURATION_FOR_COUNTUP_AFTER_PRESS1S 20

#define BUTTON_IS_PRESSED 				GPIO_PIN_RESET
#define BUTTON_IS_RELEASED 				GPIO_PIN_SET
// the buffer that the final result is stored after
// debouncing
static GPIO_PinState buttonBuffer[N0_OF_BUTTONS];
// we define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer0[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];
// we define a flag for a button pressed more than 1 second .
static uint8_t flagForButtonPress1s[N0_OF_BUTTONS] = {0};
static uint8_t flagForButton[N0_OF_BUTTONS] = {0};
//static uint8_t flagForButtonAfterPress1s[N0_OF_BUTTONS];
// we define counter for automatically increasing the value
// after the button is pressed more than 1 second .
static uint16_t counterForButtonPress1s[N0_OF_BUTTONS]={0};

static uint16_t counterForButtonAfterPress1s[N0_OF_BUTTONS]={0};

int isButtonflag(int index){
	if (flagForButton[index] == 1){
		flagForButton[index] = 0;
		return 1;
	}
	return 0;
}

unsigned char is_button_pressed(uint8_t index){
	if( index >= N0_OF_BUTTONS ) return 0;
	return ( buttonBuffer[index] == BUTTON_IS_PRESSED );
}

unsigned char is_button_pressed_3s(unsigned char index){
	if( index >= N0_OF_BUTTONS ) return 0xff;
	return ( flagForButtonPress1s[index] == 1);
}

enum ButtonState{ BUTTON_RELEASED , BUTTON_PRESSED , BUTTON_PRESSED_MORE_THAN_1_SECOND } ;
enum ButtonState buttonState[N0_OF_BUTTONS] = {BUTTON_RELEASED} ;
void fsm_for_input_processing(uint8_t index ){
	switch ( buttonState[index] ){
		case BUTTON_RELEASED :
			if( is_button_pressed(index)){
			//if( buttonBuffer[index] == BUTTON_IS_PRESSED){
				buttonState[index] = BUTTON_PRESSED ;
				counterForButtonPress1s[index] = 0;
				flagForButtonPress1s[index] = 0;
				flagForButton[index] = 1;
			}
			break ;
		case BUTTON_PRESSED :
			if (!is_button_pressed(index)){
				buttonState[index] =	 BUTTON_RELEASED ;
				flagForButton[index] = 0;
				counterForButtonPress1s[index] = 0;

			} else {
				if( counterForButtonPress1s[index] < DURATION_FOR_AUTO_INCREASING ){
						counterForButtonPress1s[index]++;
				} else {
					// the flag is turned on when 1 second has passed
					// since the button is pressed .
					flagForButtonPress1s[index] = 1;
					flagForButton[index] = 1;
					//flagForButtonAfterPress1s[index] = 1;
					counterForButtonAfterPress1s[index] = 0;
					counterForButtonPress1s[index] = 0;
				}
				if( is_button_pressed_3s(index) ){
					buttonState[index] = BUTTON_PRESSED_MORE_THAN_1_SECOND ;
					flagForButtonPress1s[index] = 0;

				}
			}
			break ;
		case BUTTON_PRESSED_MORE_THAN_1_SECOND :
			if (! is_button_pressed(index)){
			//if (buttonBuffer[index] == BUTTON_IS_RELEASED){
				buttonState[index] = BUTTON_RELEASED;
				flagForButton[index] = 0;
				counterForButtonAfterPress1s[index] = 0;
			}
			else{
					if (counterForButtonAfterPress1s[index] < DURATION_FOR_COUNTUP_AFTER_PRESS1S){
							counterForButtonAfterPress1s[index]++;
					}else{
						//flagForButtonAfterPress1s[index] = 1;
						flagForButton[index] = 1;
						counterForButtonAfterPress1s[index] = 0;
					}
				}

			break ;
	}
}




void button_reading(void){
	for (uint8_t  i = 0; i < N0_OF_BUTTONS ; i++){
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = debounceButtonBuffer0[i];
		  switch (i){
		  case 0: // read data from Button 1
			  debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
			  break;
		  case 1: // read data from Button 2
			  debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
			  break;
		  case 2: // read data from Button 1
			  debounceButtonBuffer0[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
			  break;
		  default:
			  break;
		  }

		  if( debounceButtonBuffer0[i] == debounceButtonBuffer1[i]
				&&  debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){
				buttonBuffer[i] = debounceButtonBuffer2[i];
				fsm_for_input_processing(i);
		  }

	}
}
