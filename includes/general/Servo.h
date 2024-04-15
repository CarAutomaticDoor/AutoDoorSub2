#ifndef GTM_TOM_INTERRUPT_H_
#define GTM_TOM_INTERRUPT_H_

#include "Platform_Types.h"

/*********************************************************************************************************************/
/*-----------------------------------------------Function Prototypes-------------------------------------------------*/
/*********************************************************************************************************************/
void Init_Servos(void);
void Set_Duty_Door(uint32 n);
void Set_Duty_Lock(uint32 n);

#endif /* GTM_TOM_INTERRUPT_H_ */