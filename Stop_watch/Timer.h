/*
 * Timer.h
 *
 *  Created on: Oct 18, 2022
 *      Author: Lenovo
 */

#ifndef TIMER_H_
#define TIMER_H_
#include"Timer_Config.h"
#include"Common_Macros.h"
#include"Interrupt_Config.h"
#include"Std_Types.h"
#include"DIO_Config.h"
#include"seven_segment.h"
extern uint8 counter;
void Timer0_normal_init();
void Timer0_func();

void Timer0_CTC_init();
void Timer0_CTC_func();

void Timer0_PWM_init(uint8);
void Timer0_PWM_func();

void Timer1_init();
void Timer1_func();

void Timer2_init();
void Timer2_func();



#endif /* TIMER_H_ */
