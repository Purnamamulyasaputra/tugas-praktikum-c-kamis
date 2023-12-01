#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int i, n, found = 0;

    printf("Masukkan bilangan integer = ");
    scanf("%i", &n);

    printf("Isi array: ");
    for (i = 0; i < 11; i++) {
        printf("%i ", A[i]);
    }
 
    if (found = 1) {
        printf("\nADA\n");
    } else {
        printf("\nTIDAK ADA\n");
    }
        
    printf("Lokasi bilangan yang sama: ");
    for (i = 0; i < 11; i++) {
        if (A[i] == n) {
            printf("%d ", i);
        }
    }

    return 0;
}
