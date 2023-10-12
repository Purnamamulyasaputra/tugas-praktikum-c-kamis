#include <stdio.h>
#include <math.h>

int main()
{
	//definisikan diameter bola
	double diameter = 15.0;
	//menghitung jari-jari bola(radius= diameter / 2)
	double jari = diameter / 2.0;
	//menghitung isi (volume) bola
	double volume = (4.0 / 3.0) * M_PI * pow(jari, 3);
	//menampilkan hasil isi (volume) bola
	printf ("Isi (volume) bola dengan diameter %.1f cm adalah %.2f cm^3\n", diameter, volume);
	
	return 0;
}