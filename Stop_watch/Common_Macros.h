/*
 * Common_Macros.h
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_
#define SET_BIT(REG,BIT_NUM) REG|=(1<<BIT_NUM)
#define CLEAR_BIT(REG,BIT_NUM) REG&=~(1<<BIT_NUM)
#define TOGGLE_BIT(REG,BIT_NUM) REG^=(1<<BIT_NUM)
#define GET_BIT(port_type,PIN_ID)  (((port_type>>PIN_ID))&(0x01))
#define ROL(REG,BIT_NUM) (REG=(REG<<BIT_NUM)|(REG>>(8-BIT_NUM)))
#define ROR(REG,BIT_NUM) (REG=(REG>>BIT_NUM)|(REG<<(8-BIT_NUM)))
#define BIT_IS_SET(REG,BIT_NUM)(REG & (1<<BIT_NUM))
#define BIT_IS_CLEAR(REG,BIT_NUM)(!(REG & (1<<BIT_NUM)))



#endif /* COMMON_MACROS_H_ */
