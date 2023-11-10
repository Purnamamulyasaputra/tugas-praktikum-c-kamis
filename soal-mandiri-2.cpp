#include <stdio.h>

int main()
{
	int kode;
	char jenis;
	float harga, diskon, hargasetelahdiskon;

	printf("Masukkan kode : ");
	scanf("%d", &kode);
	printf("Masukkan jenis (A/B/C) : ");
	scanf(" %c", &jenis);	
	printf("Masukkan harga : ");
	scanf("%f", &harga);
	
	switch (jenis) {
		case 'A' :
			diskon = 0.10;
			break;
		case 'B' :
			diskon = 0.15;
			break;
		case 'C' :
			diskon = 0.20;
			break;
		default :
			printf ("Jenis yang dimasukkan tidak valid.\n");
			return 1;
	}
	
	if (harga <= 0) {
		printf ("Harga harus lebih dari 0.\n");
		return 1;
	}
	
	hargasetelahdiskon = harga - (harga * diskon);
		
	printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, hargasetelahdiskon);

	return 0;
}