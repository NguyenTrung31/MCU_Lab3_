 /*
 * button.h
 *
 *  Created on: Nov 13, 2023
 *      Author: trung
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getKeyInput();


#endif /* INC_BUTTON_H_ */
