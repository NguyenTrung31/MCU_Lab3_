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

