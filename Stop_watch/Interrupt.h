/*
 * Interrupt.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include"Interrupt_Config.h"
#include"Common_Macros.h"
#include"DIO_Config.h"
#include"seven_segment.h"
#include"DIO_Types.h"
void int0_init();
void int1_init();
void int2_init();
void interrupt0();
void interrupt1();
void interrupt2();


#endif /* INTERRUPT_H_ */
