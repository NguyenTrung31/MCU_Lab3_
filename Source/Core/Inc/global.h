/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#define INIT 			0

#define AUTO_RED 		8
#define AUTO_GREEN 		9
#define AUTO_YELLOW 	10

#define MODE1 			1
#define MODE2 			2
#define MODE3 			3
#define MODE4 			4

#define MODIFY_RED 			12
#define MODIFY_GREEN 		13
#define MODIFY_YELLOW 		14

#define MODE1_led7seg_1 			20
#define MODE1_led7seg_2 			21
#define MODE1_led7seg_3 			22
#define MODE1_led7seg_4 			23

#define MODE_MODIFY_led7seg_1 			30
#define MODE_MODIFY_led7seg_2 			31
#define MODE_MODIFY_led7seg_3 			32
#define MODE_MODIFY_led7seg_4 			33

extern  int status_mode;
extern  int status_ver;
extern  int status_hor;
extern  int status_led7seg;

extern int index_led;

extern int but1;
extern int but2;
extern int but3;

extern int timered;
extern int timegreen;
extern int timeyellow;

extern int led12;
extern int led34;

int timeTimer(int time);

#endif /* INC_GLOBAL_H_ */
