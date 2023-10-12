#include <stdio.h>

int main()
{
	int bilangan;
	
	printf ("Masukkan nilai bilangan bulat positif : ") ;
	scanf("%ld", &bilangan);
	
	if (bilangan <= 0){
		printf(" Bilangan yang anda masukkan bukan bilangan bulat positif.\n");
	} else {
		if ( bilangan % 2 == 0){
			printf ( " Bilangan ini adalah genap.\n");
		} else {
			printf ("Bilangan ini adalah ganjil.\n");
		}
	}
	return 0;
}