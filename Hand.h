#ifndef HAND_H
#define HAND_H
class Hand
{
private:
	int ENA, In1, In2, speed_up, speed_down;
	String name;
public:
	Hand(int ENA, int In1, int In2, int speed_up = 150, int speed_down = 50, String name = "noName"){
		this->name = name;
		this->In1 = In1;
		this->In2 = In2;
    	this->ENA = ENA;
		this->speed_up = speed_up;
		this->speed_down = speed_down;
		pinMode(ENA, OUTPUT);
		pinMode(In1, OUTPUT);
		pinMode(In2, OUTPUT);
		Serial.print("Hand: ");
		Serial.print(name);
    Serial.print("ENA: ");
    Serial.print(ENA);
    Serial.print("In1: ");
    Serial.print(In1);
    Serial.print("In2: ");
    Serial.print(In2);
    Serial.print("speed: ");
    Serial.print(speed_up);
		Serial.println(" - created");
	
	}

	void up(){
		up(speed_up);
	}

	void down(){
		down(speed_down);
	}
	void up(int speed){
		analogWrite(ENA, speed);
		digitalWrite(In2, LOW);
		digitalWrite(In1, HIGH);

		Serial.print("Hand: ");
		Serial.print(name);
    Serial.print("ENA: ");
    Serial.print(ENA);
    Serial.print("In1: ");
    Serial.print(In1);
    Serial.print("In2: ");
    Serial.print(In2);
    Serial.print("speed: ");
    Serial.print(speed);
		Serial.println(" - up");
	}
	void down(int speed){
		analogWrite(ENA, speed);
		digitalWrite(In1, LOW);
		digitalWrite(In2, HIGH);
		
		Serial.print("Hand: ");
		Serial.print(name);
    Serial.print("ENA: ");
    Serial.print(ENA);
    Serial.print("In1: ");
    Serial.print(In1);
    Serial.print("In2: ");
    Serial.print(In2);
    Serial.print("speed: ");
    Serial.print(speed);
		Serial.println(" - down");
	}
	void stop(){
		analogWrite(ENA, 0);
		digitalWrite(In2, LOW);
		digitalWrite(In1, LOW);

		Serial.print("Hand: ");
		Serial.print(name);
		Serial.println(" - stopped");
	}
	
};
#endif
