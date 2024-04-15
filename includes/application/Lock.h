#ifndef INCLUDES_APPLICATION_LOCK_H_
#define INCLUDES_APPLICATION_LOCK_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Platform_Types.h"
#include "Servo.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define     LOCK             0
#define     UNLOCK           1

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/
void Control_Lock(uint8 *state);

#endif /* INCLUDES_APPLICATION_LOCK_H_ */