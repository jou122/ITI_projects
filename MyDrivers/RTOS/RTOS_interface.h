/*********************************************/
/* AUTHOR:          MOHAMED HAGGAG           */
/* DATE:            16 /8/2023               */
/* VERSION: version 1                        */
/* DESCRIPTION : OS_SCHEDULER                */
/*********************************************/

#ifndef _RTOS_INT_H
#define _RTOS_INT_H

u8 RTOS_u8CreateTask(void(*Copy_Handler)(void),u8 Copy_Periodicty,u8 Copy_priority,u8 Copy_FirstD);
void scheduler (void);
void RTOS_voidDeletetask(u8 Copy_priority);
void RTOS_voidSuspendtask(u8 Copy_priority);
void RTOS_voidResume(u8 Copy_priority);


#endif