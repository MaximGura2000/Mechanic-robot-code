#ifndef WHEEL_H
#define WHEEL_H 
class Wheel
{
private:
	byte DIR, PWM;
	String name;

	void set_up(){
		pinMode(DIR, OUTPUT);
		pinMode(PWM, OUTPUT);

		Serial.print("Wheel: ");		
		Serial.print(name);
		Serial.println(" set_uped");
	}

public:
	Wheel(int DIR, int PWM, String name = "noName"){
		this->DIR = DIR;
		this->PWM = PWM;
		this->name = name;
		set_up();
	}

	void spinLeft(int speed = 0){
		digitalWrite(DIR, HIGH);
		analogWrite(PWM, speed);

		Serial.print("Wheel: ");	
		Serial.print(name);
		Serial.print(" - spinleft, PWM = ");
		Serial.print(PWM);
		Serial.print(" DIR = ");
		Serial.println(DIR);
	}

	void spinRight(int speed = 0){
		digitalWrite(DIR, LOW);		
		analogWrite(PWM, speed);

		Serial.print("Wheel: ");
		Serial.print(name);
		Serial.print(" - spinRight");
		Serial.print(" - spinleft, PWM = ");
		Serial.print(PWM);
		Serial.print(" DIR = ");
		Serial.println(DIR);
	}

	void stop(){
		analogWrite(PWM, 0);

		Serial.print("Wheel: ");
		Serial.print(name);
		Serial.print(" - stopped");
		Serial.print(" - spinleft, PWM = ");
		Serial.print(PWM);
		Serial.print(" DIR = ");
		Serial.println(DIR);
	}

};
#endif