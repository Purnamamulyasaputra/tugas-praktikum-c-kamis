#include <stdio.h>

int main()
{
	int nilai;
	printf("Masukkan bilangan positifnya = ");
	scanf("%i", &nilai);
	
	if (nilai > 0) {
		if (nilai % 2 == 0) {
			printf("Bilangan %d adalah genap.\n", nilai);
		} else{
			printf("Bilangan %d adalah ganjil.\n", nilai);
		}
	}else{
			printf("Masukkan bilangan bulat positif \n");
		}
	return 0;
}