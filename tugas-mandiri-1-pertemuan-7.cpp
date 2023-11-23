#include <stdio.h>

int main()
{
	int nilai[5];
	

	for (int i = 0; i < 5; ++i){
		printf("nilai mahasiswa %d ", i + 1);
		scanf("%d", &nilai[i]);
	}
	
	printf("\nDaftar mahasiswa yang lulus:\n");
	for (int i = 0; i < 5; ++i){
		if(nilai[i] > 60){
			printf("\nMahasasiswa %d : %d (LULUS)\n\n",i + 1, nilai[i]);
		}
	}
	return 0;
}