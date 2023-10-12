#include <stdio.h>
#include <math.h>

int main()
{
	//definiskan 
	double sisi_alas = 4.0;
	double sisi_tinggi = 5.0;
	
	double sisi_miring = sqrt(sisi_alas * sisi_alas + sisi_tinggi * sisi_tinggi) ;
	 printf("Sisi miring segitiga siku-siku dengan alas %.1f cm dan tinggi %.1f cm adalah (%.2f cm)\n ",sisi_alas, sisi_tinggi, sisi_miring);
	 
	 return 0;
}