/*
 * MEXTI_Config.h
 *
 *  Created on: Aug 15, 2023
 *      Author: Youssef
 *      Version: V1
 */

#ifndef MCAL_MEXTI_MEXTI_PRIVATE_H_
#define MCAL_MEXTI_MEXTI_PRIVATE_H_


#define EXTI_BASE_ADDR  0x40013C00


typedef struct{
	u32 IMR;
	u32 EMR;
	u32 RTSR;
	u32 FTSR;
	u32 SWIER;
	u32 PR;
}MEXTI_t;



#define MEXTI ((volatile MEXTI_t *) EXTI_BASE_ADDR )




#endif /* MCAL_MEXTI_MEXTI_PRIVATE_H_ */
