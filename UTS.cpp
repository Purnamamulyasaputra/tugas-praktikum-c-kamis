#include <stdio.h>
#include <unistd.h>

int main() {
    int ntu[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int rpm[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int waktu_cuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
    int level_kekeruhan_air, i;


printf (" Tekan Start\n");
    printf("Masukkan level kekeruhan air (NTU): ");
    scanf("%d", &ntu);
   
    
	    int level = -1;
    for (i = 0; i < sizeof(ntu) / sizeof(ntu[0]); ++i) {
        if (level_kekeruhan_air <= ntu[i]) {
            level = i;
            break;
        }
    }
    
    if (level != -1) {
        printf("Mesin cuci akan mencuci pada level kekeruhan air %d (NTU).\n", ntu [level]);
        printf("Waktu 60 menit\n");
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        printf("Mengaktifkan motor listrik dengan kecepatan %d rpm...\n", rpm[level]);
        printf("Membuka klep pembuangan air kotor selama 2 menit\n");
        printf("Motor listrik utama berhenti setiap pertengahan waktu\n");
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");
        printf("Motor listrik utama berputar selama sisa waktu mencuci\n");
        printf("Motor listrik klep pembuang air kotor aktif selama 2 menit \n");
        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm \nuntuk mengeringkan cucian selama 3 menit\n");        
        printf("Cucian telah selesai dan kering.\n\n");
        printf("Terimakasih atas kepercayaanya kepada kami\n");
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }
    
    return 0;
}