/*
 * input_reading.h
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#define N0_OF_BUTTONS		3
void button_reading(void );
void fsm_for_input_processing(uint8_t index );
int isButtonflag(int index);
unsigned char is_button_pressed(unsigned char index );
unsigned char is_button_pressed_3s(unsigned char index );

#endif /* INC_INPUT_READING_H_ */
