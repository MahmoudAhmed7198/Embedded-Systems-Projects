/*
 * Interrupt.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#include"Interrupt.h"

void int0_init()
{
	SET_BIT(SREG_REG,7);
	SET_BIT(MCUCR_REG,0);
	//SET_BIT(MCUCR_REG,1);
	SET_BIT(GICR_REG,6);
}

void int1_init()
{
	SET_BIT(SREG_REG,7);
	SET_BIT(MCUCR_REG,2);
	SET_BIT(MCUCR_REG,3);
	SET_BIT(GICR_REG,7);
}
void int2_init()
{
	SET_BIT(SREG_REG,7);
	SET_BIT(MCUCSR_REG,6);
	SET_BIT(GICR_REG,5);
}


