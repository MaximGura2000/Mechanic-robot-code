#ifndef PLATE_H
#define PLATE_H 
class Plate
{
private:
	Wheel *wheel1, *wheel2, *wheel3;
    int speed;
    bool flag = false;
    String name;

public:
    Plate(Wheel *wheel1, Wheel *wheel2, Wheel *wheel3, int speed = 255,  String name = "noName"){
        this-> name = name;

        this->wheel1 = wheel1;
        this->wheel2 = wheel2;
        this->wheel3 = wheel3;
        delay(100);
        stop();

        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - set_uped");
    }

    void change_speed(){
        if(flag){
            set_speed(255);
        }else{
            set_speed(200);
        }
    }

    void set_speed(int speed){
        flag = !flag;
        this->speed = speed;
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - set_speed");
        Serial.print(speed);
    }

    void forward(){
    	wheel1->spinLeft(speed);
        wheel2->spinRight(speed);
        wheel3->stop();
    
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - forward");
    }

    void back(){
        wheel1->spinRight(speed);
        wheel2->spinLeft(speed);
        wheel3->stop();
    
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - back");
    }

    void circleRight(){
        wheel1->spinLeft(speed);
        wheel2->spinLeft(speed);
        wheel3->spinLeft(speed);
    
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - circleLeft");
    }

    void circleLeft(){
        wheel1->spinRight(speed);
        wheel2->spinRight(speed);
        wheel3->spinRight(speed);
    
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - circleLeft");
    }

    void stop(){
        wheel1->stop();
        wheel2->stop();
        wheel3->stop();
    
        Serial.print("Plate: ");
        Serial.print(name);
        Serial.println(" - stopped");
    }

};
#endif
