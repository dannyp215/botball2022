#include <stdio.h>
#include <kipr/wombat.h>
void rumba_drive(x){
     create_connect();
     create_drive_direct(182, 200);
     wait_for_milliseconds (x);
     create_stop();
     create_disconnect();
}
void rumba_turn_left(x){
	 create_connect();
     create_drive_direct(200, -200);
     wait_for_milliseconds (x);
     create_stop();
     create_disconnect();
}
void rumba_turn_right(x){
     create_connect();
     create_drive_direct(-800, 800);
     wait_for_milliseconds (x);
     create_stop();
     create_disconnect();
}
void rumba_drive_bump(){
    create_connect();
	while (get_create_rbump() == 0){
		create_drive_direct(100, 100);
	}
	create_stop();
	create_disconnect();
}