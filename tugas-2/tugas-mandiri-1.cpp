#include <stdio.h>

int main()
{
	//definisikan panjang alas dan tinggi segitiga
	double panjang_alas = 8.0;
	double panjang_tinggi = 5.0;
	
	//menghitung luas segitiga
	double luas = 0.5 * panjang_alas * panjang_tinggi;
	
	//menampilkan hasilnya
	printf (" Luas segitiga dengan alas %.lf cm dan tinggi %.lfcm  adalah %.2f cm^2\n : ", luas, panjang_alas, panjang_tinggi);
	
	return 0;
	
	
}