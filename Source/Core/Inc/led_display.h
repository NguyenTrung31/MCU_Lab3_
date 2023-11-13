/*
 * led_display.h
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

void display7SEG(int num);

void update7SEG(int index);

void SetOffVer();
void SetRedVer();
void SetGreenVer();
void SetYellowVer();

void SetOffHor();
void SetRedHor();
void SetGreenHor();
void SetYellowHor();

#endif /* INC_LED_DISPLAY_H_ */
