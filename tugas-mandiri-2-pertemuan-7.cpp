#include <stdio.h>
int main()
{
	int A[11] ;
	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 3};
	
	int a = 0;
	for (int i = 0; i < 11; i++ ){
		if (data[i] % 5 == 0) {
			A[a] = data[i];
			a++;
		}
	}
	
	for(int i = 0; i < a; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}