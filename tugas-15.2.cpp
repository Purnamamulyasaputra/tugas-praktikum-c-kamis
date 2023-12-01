#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char n;
	int i, found = 0;

    // Input bilangan yang dicari
    printf("Masukkan sebuah karakter: ");
    scanf("%c", &n);

    // Cetak isi array
    printf("Isi array: ");
    for (i = 0; i < 10; i++) {
        printf("%3c", A[i]);
    }

    // Periksa isi array
    printf("\n");    
    for (i = 0; i < 1; i++) {
        if (A[i] == n) {
            printf("%d ", i);
            found = 1;
        }
    }
    // Tampilkan hasil
    printf("\n");
    if (found=1) {
        printf("ADA\n");
    } else {
        printf("TIDAK ADA\n");
    }
    return 0;
}
