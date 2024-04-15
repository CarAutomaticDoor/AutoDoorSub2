/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Foot_Sensor.h"

#include "Ultrasonic.h"
#include "Platform_Types.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define TIME_OUT    0.00001f
#define THRESHOLD   10.0f

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/
Ultrasonic g_foot_config = {.trig = {&MODULE_P00, 0}, .echo = {&MODULE_P00, 1}} ;

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
void Init_Foot_Sensor(){
    // 초기 설정. trig, echo pin 입출력 세팅.
    Init_Ultrasonic(&g_foot_config);
}

// return TRUE if obstacle detected
boolean Read_Foot_Detection_State() {

    /*
     * 초기값은 return : FALSE  (감지 X), 감지가 된다면 return : TRUE (감지 O)
     * 매개변수 threshold_dist : 임계값 거리
     */

    // float32 foot_distance = Get_Ultrasonic_Distance(&g_Foot_Config);
    float32 foot_distance = Get_Ultrasonic_Distance(&g_foot_config);

    return ((TIME_OUT < foot_distance) && (foot_distance <= THRESHOLD));
}