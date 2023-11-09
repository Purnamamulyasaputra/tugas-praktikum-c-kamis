#include <stdio.h>
#include <unistd.h>
 

int fuzzymotorspeed(int level) {
	if (level < 6)
		return 1000;
	else if (level < 18)
		return 1500;
	else 
		return 2000;
}
int main()
{	int turbiditylevel = 12;
	int w = 2;
	
	printf("Mengisi air...\n");
	sleep(2);
	
	printf("Mendeteksi level kekeruhan air...\n");
	
	int motor_speed = fuzzymotorspeed(turbiditylevel);
	int total_cuci = 60;
	for (int minute = 0; minute < total_cuci; minute ++) {
		if (minute == total_cuci / 2) {
			printf("Membuanga air kotor \n");
			sleep(2);
		}
		
		if (minute == (total_cuci/2) + 3) {
			printf("Mengeringkan cucian \n");
			sleep(3);
		}
		
		printf("Motor berputar dengan kecepatan %d rpm\n", motor_speed);
		sleep(1);
	}
	
	printf ("Membuang air kotor\n");
	sleep(w);
	
	printf("Mengeringkan cucian\n");
	sleep(3);
	
	return 0;
}