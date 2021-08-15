RemoteXY_Handler (); 
if(RemoteXY.connect_flag == 1){
	int tmp;

	if(RemoteXY.servo_button_1 == 1){
		servo1->change();
	}else if(RemoteXY.servo_button_2 == 1){
		servo2->change();
	}else if(RemoteXY.servo_button_3 == 1){
		servo3->change();
	}
	tmp = RemoteXY.lhand_slider_1;
	if(tmp == 0){
		lhand->stop();
	} else if(){
		lhand->up(tmp*255/100);
	}else{
		lhand->down(-tmp*255/100);
	}

	tmp = RemoteXY.shand_slider_1;
	if(tmp == 0){
		lhand->stop();
	} else if(){
		lhand->up(tmp*255/100);
	}else{
		lhand->down(-tmp*255/100);
	}

}