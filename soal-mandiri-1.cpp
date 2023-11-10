#include <stdio.h>

int main()
{
	int jam_masuk, jam_pulang, lama_bekerja;
	
	printf ("Masuk jam : ");
	scanf ("%i", &jam_masuk);
	printf ("keluar jam : ");
	scanf ("%i", &jam_pulang);
	
	lama_bekerja = jam_pulang - jam_masuk;
	
	if (jam_pulang > 0 ){
	}   
	printf("lama bekerja adalah %d.\n");
	        
}