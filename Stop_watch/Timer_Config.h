/*
 * Timer_Config.h
 *
 *  Created on: Oct 18, 2022
 *      Author: Lenovo
 */

#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_
#include"Std_Types.h"

//Timer0 configuration
#define TCCR0_REG *((volatile uint8*)0x53)
#define TCNT0_REG *((volatile uint8*)0x52)
#define OCR0_REG *((volatile uint8*)0x5C)
#define TIMSK_REG *((volatile uint8*)0x59)
#define TIFR_REG *((volatile uint8*)0x58)
//Timer1 configuration
#define TCCR1A_REG *((volatile uint8*)0x4f)
#define TCCR1B_REG ((volatile uint8*)0x4E)
#define TCNT1H_REG *((volatile uint8*)0x4D)
#define TCNT1L_REG *((volatile uint8*)0x4C)
#define OCR1AH_REG *((volatile uint8*)0x4B)
#define OCR1AL_REG *((volatile uint8*)0x4A)
#define OCR1BH_REG *((volatile uint8*)0x49)
#define OCR1BL_REG *((volatile uint8*)0x48)
#define ICR1H_REG *((volatile uint8*)0x47)
#define ICR1L_REG *((volatile uint8*)0x46)

//Timer2 configuration
#define TCCR2_REG *((volatile uint8*)0x45)
#define TCNT2_REG *((volatile uint8*)0x44)
#define OCR2_REG *((volatile uint8*)0x43)




#endif /* TIMER_CONFIG_H_ */
