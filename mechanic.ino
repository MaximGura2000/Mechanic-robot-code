#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include "Wheel.h"
#include "MyServo.h"
#include "Hand.h"
#include "Plate.h"
// #include "MyRemoteXY.h"

SoftwareSerial *BT;

Wheel *wheel1, *wheel2, *wheel3;
Hand *shand, *lhand;
MyServo *servo1, *servo2, *servo3;
Plate *plate;
char order;

void setup(){
    #include "SetUper.h"
}


void loop(){
   // #include "Loop.h"
if(Serial.available()){

    order = Serial.read(); 

    Serial.print("Order: ");
    Serial.println(order);

    switch (order){
      case '0': {
        plate->forward();
        break;
      } case '1': {
        plate->back();
        break;
      } case '2': {
        plate->circleLeft();
        break;
      } case '3': {
        plate->circleRight();
        break;
      } case '4': {
        shand->up();
        break;
      } case '5': {
        shand->down();
        break;
      } case '6': {
        shand->stop();
        break;
      } case '7': {
        lhand->up();
        break;
      } case '8': {
        lhand->down();
        break;
      } case '9': {
        lhand->stop();
        break;
      } case 'a': {
        servo1->change();
        break;
      }case 'b':{
        servo2->change();
        break;
      } case 'c': {
        servo3->change();
        break;
      } case 'e': {
        plate->change_speed();
        break;
      } case 'd': {
        plate->stop();
        break;
      }
      
    }
   
    Serial.println(" . ");
  } 

}
