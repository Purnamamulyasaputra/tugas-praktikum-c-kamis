#include <stdio.h>

int main()
{
	int nilai;
	
	printf("Inputkan sebuah nilai : ");
	scanf("%i", &nilai);
	
	if (nilai > 50)
	{
		nilai = nilai - 25;
		nilai = nilai + 10;
	printf("\nNilainya adalah %i: \n ", nilai);
	} else {
		printf("Tidak bisa menampilkan");
	}
	
	return 0;
}