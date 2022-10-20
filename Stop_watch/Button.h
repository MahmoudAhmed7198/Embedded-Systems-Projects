/*
 * Button.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include"DIO.h"
#include"seven_segment.h"
#include<util/delay.h>
extern uint8 counter;
void button_init();
void start_button();
void stop_reset_button();
#endif /* BUTTON_H_ */
