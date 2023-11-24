/*
 * button.h
 *
 *  Created on: Nov 11, 2023
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"


#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define BUTTONS_NUMBER 3

int isButtonPressed(int i);

void getKeyInput();

#endif /* INC_BUTTON_H_ */
