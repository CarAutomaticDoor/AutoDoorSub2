#ifndef INCLUDES_GENERAL_UART_H_
#define INCLUDES_GENERAL_UART_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Platform_Types.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define UART_NOINPUT    48 //'0'
#define UART_OPEN       49 //'1'
#define UART_CLOSE      50 //'2'
#define UART_LOCK       51 //'3'

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/
extern uint32 g_rx_data;

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/
//void Init_Uart(uint32 **g_main);
void Init_Uart();
void Send_Uart_Msg(uint8 *msg, Ifx_SizeT count);

#endif /* INCLUDES_GENERAL_UART_H_ */