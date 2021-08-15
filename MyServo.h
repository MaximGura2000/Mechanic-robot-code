#ifndef MYSERVO_H
#define MYSERVO_H 
class MyServo
{
private:
	int pin, eangl_min, eangle_max;
	bool flag = false; // false open, true close
	Servo servo;
	String name;

	void set_up(){
    	servo.attach(pin, eangl_min, eangle_max);
    	servo.write(25);
    	Serial.print("Servo: ");
    	Serial.print(name);
    	Serial.print(" - set_uped on pin: ");
    	Serial.println(pin);
	}


public:
	MyServo(int pin, int eangl_min = 1000, int eangle_max = 2000, String name = "noname"){
    	this->pin = pin;
    	this->eangl_min = eangl_min;
    	this->eangle_max = eangle_max;
      	this->name = name;
    	set_up();
	}

	void change(){
		if(flag){
			open();
		}else{
			close();
		}
	}

	void write(int eangle = 90){
		servo.write(eangle);
		Serial.print("Servo: ");
    	Serial.print(name);
    	Serial.print(" - write ");
    	Serial.println(eangle);
	}

	void open(){
		flag = false;
		servo.write(25);
		Serial.print("Servo: ");
    	Serial.print(name);
    	Serial.println(" - opened");

	}

	void close(){
		flag = true;
		servo.write(160);
		Serial.print("Servo: ");
    	Serial.print(name);
    	Serial.println(" - closed");

	}
};
#endif
