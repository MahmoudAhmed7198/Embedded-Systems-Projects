/*
 * DIO_Config.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_
#define DDRA_REG *((volatile uint8*)0x3A)  //0x3A address of DDRA make casting for this address to pointer to uint8 and make derefrence to put value in this address and make volatile to prevent optimization
#define PORTA_REG *((volatile uint8*)0x3B)
#define PINA_REG *((volatile uint8*)0x39)
#define DDRB_REG *((volatile uint8*)0x37)
#define PORTB_REG *((volatile uint8*)0x38)
#define PINB_REG *((volatile uint8*)0x36)
#define DDRC_REG *((volatile uint8*)0x34)
#define PORTC_REG *((volatile uint8*)0x35)
#define PINC_REG *((volatile uint8*)0x33)
#define DDRD_REG *((volatile uint8*)0x31)
#define PORTD_REG *((volatile uint8*)0x32)
#define PIND_REG *((volatile uint8*)0x30)
#endif /* DIO_CONFIG_H_ */
