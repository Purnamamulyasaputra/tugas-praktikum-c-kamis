#include <stdio.h>

int main()
{
	//definisikan menggunakan (double) untuk memasukkan nilai 8
	double panjang_alas = 8.0;
	double panjang_tinggi = 5.0;
	
	// masukkan rumus menghitung luas segitiga dan menghitungnya
	double luas = 0.5 * panjang_alas * panjang_tinggi;
	
	//menampilkan hasilnya
	printf (" Luas segitiga dengan alas %.lf cm dan tinggi %.lfcm  adalah %.2f cm^2\n : ", luas, panjang_alas, panjang_tinggi);
	
	return 0;
	
	
}