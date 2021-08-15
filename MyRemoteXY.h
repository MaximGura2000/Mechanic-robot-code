#define REMOTEXY_MODE__SOFTSERIAL
#include <SoftwareSerial.h> 

#include <RemoteXY.h> 

// настройки соединения  
#define REMOTEXY_SERIAL_RX 10 
#define REMOTEXY_SERIAL_TX 11 
#define REMOTEXY_SERIAL_SPEED 9600 
#define REMOTEXY_ACCESS_PASSWORD "1243" 


// конфигурация интерфейса   
#pragma pack(push, 1) 
uint8_t RemoteXY_CONF[] = 
  { 255,7,0,0,0,58,0,8,179,0,
  1,0,57,7,12,12,2,31,49,0,
  1,0,71,7,12,12,2,31,50,0,
  1,0,85,7,12,12,2,31,51,0,
  5,32,5,22,37,37,2,26,31,4,
  48,67,21,8,37,2,26,4,48,82,
  21,8,38,2,26 }; 
   
// структура определяет все переменные вашего интерфейса управления  
struct { 

    // input variable
  uint8_t servo_button_1; // =1 если кнопка нажата, иначе =0 
  uint8_t servo_button_2; // =1 если кнопка нажата, иначе =0 
  uint8_t servo_button_3; // =1 если кнопка нажата, иначе =0 
  int8_t joystick_1_x; // =-100..100 координата x положения джойстика 
  int8_t joystick_1_y; // =-100..100 координата y положения джойстика 
  int8_t lhand_slider_1; // =-100..100 положение слайдера 
  int8_t shand_slider_1; // =-100..100 положение слайдера 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY; 
#pragma pack(pop) 