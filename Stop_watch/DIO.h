/*
 * DIO.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef DIO_H_
#define DIO_H_
#include"Std_Types.h"
#include"Common_Macros.h"
#include"DIO_Types.h"
#include"DIO_Config.h"
#include<util/delay.h>

void set_port_direction(PORT_Type p , PORT_DIRECTION direction);
void set_pin_direction(PORT_Type p , PIN_NUM pnum , PORT_DIRECTION direction);
void set_port_value(PORT_Type p , uint8 val);
void set_pin_value(PORT_Type p , PIN_NUM pnum , DIO_VAL val);
DIO_VAL get_pin_value(PORT_Type p,PIN_NUM pnum);



#endif /* DIO_H_ */
