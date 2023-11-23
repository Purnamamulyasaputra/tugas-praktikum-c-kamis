#include <stdio.h>

int main() {
    double bungaini, jumlahuang = 1000000.0, bungaperbulan = 0.02; 
    int jumlahbulan = 10;

    for (int i = 1; i <= jumlahbulan; i++) {
        bungaini = jumlahuang * bungaperbulan;

        jumlahuang += bungaini;
        printf("Setelah %d bulan, jumlah uangnya adalah Rp. %.f \n", i, jumlahuang);
    }

    return 0;
}

