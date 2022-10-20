/*
 * DIO_Types.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_
typedef enum
{
	INPUT,
	OUTPUT
}PORT_DIRECTION;

typedef enum
{
	PORTA,
	PORTB,
	PORTC,
	PORTD

}PORT_Type;
typedef enum
{
	LOW,
	HIGH

}DIO_VAL;
typedef enum
{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7

}PIN_NUM;



#endif /* DIO_TYPES_H_ */
