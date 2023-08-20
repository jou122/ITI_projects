/*
 * MSTK_Private.h
 *
 *  Created on: Aug 15, 2023
 *      Author: user
 */

#ifndef MCAL_MSTK_MSTK_PRIVATE_H_
#define MCAL_MSTK_MSTK_PRIVATE_H_

#define STK_BASE_ADDR  0xE000E010


typedef struct{
	u32 CTRL;
	u32 LOAD;
	u32 VAL;
	u32 CALIB;
}MSTK_t;




#define MSTK ((volatile MSTK_t *) STK_BASE_ADDR )



#endif /* MCAL_MSTK_MSTK_PRIVATE_H_ */
