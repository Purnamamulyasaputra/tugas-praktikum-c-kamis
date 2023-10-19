#include <stdio.h>

int main()
{
	int nilai;
	
	printf("\nInputkan sebuah nilai : ");
	scanf("%i", &nilai);
	
	if (nilai > 50){
		nilai = nilai + 10;
	} else {
		nilai = nilai - 25;
	}
	printf("\n\nNilai setelah perubahan %i", nilai);
	
	
	return 0;
}