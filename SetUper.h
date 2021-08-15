  Serial.begin(9600);
  // BT = new SoftwareSerial(10, 11);
  // RemoteXY_Init (); 

	// BT->begin(9600);
	// BT->print("connected");
	Serial.println("connected");
  Serial.println("started:");
  shand = new Hand(8, 22, 23, 500, 100, " short "); // ena, in1, in2, speed_up, speed_down, name
  lhand = new Hand(9, 24, 25, 250, 100, " long "); // ena, in1, in2, speed_up, speed_down, name 

  servo1 = new MyServo(6, 1000, 2000, "servo1");// pin, min, max 
  servo2 = new MyServo(5, 1000, 2000, "servo2"); // pin, min, max 
  servo3 = new MyServo(4, 500, 1500, "servo3"); // pin, min, max 

  wheel1 = new Wheel(45, 43, "Plate_wheel1");// dir1, pwm1, name
  wheel2 = new Wheel(42, 2, "Plate_wheel2");// dir2, pwm2, name
  wheel3 = new Wheel(46, 47, "Plate_wheel3");// dir3, pwm3, name

  plate = new Plate(wheel1, wheel2, wheel3, 255, "mechanic");  // wheel1, wheel2, wheel3, speed, name 757