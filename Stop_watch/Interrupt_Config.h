/*
 * Interrupt_Config.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef INTERRUPT_CONFIG_H_
#define INTERRUPT_CONFIG_H_
#include"Std_Types.h"
#define SREG_REG *((volatile uint8*)0x5f)
#define GICR_REG *((volatile uint8*)0x5B)
#define GIFR_REG *((volatile uint8*)0x5A)
#define MCUCR_REG *((volatile uint8*)0x55)
#define MCUCSR_REG *((volatile uint8*)0x54)


#endif /* INTERRUPT_CONFIG_H_ */
