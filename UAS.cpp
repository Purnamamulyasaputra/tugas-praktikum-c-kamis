#include <stdio.h>
#include <unistd.h>

int systemfuzzy(int level_kekeruhan_air) {
    if (level_kekeruhan_air <= 6) {
        return 2000;
    } else if (level_kekeruhan_air <= 8) {
	return 1000;
    } else if (level_kekeruhan_air <= 12) {
        return 1000;
    } else if (level_kekeruhan_air <= 18) {
        return 1000;
    } else if (level_kekeruhan_air <= 24) {
        return 1000;
    } else if (level_kekeruhan_air <= 30) {
        return 1000;
    } else if (level_kekeruhan_air <= 36) {
        return 1000;
    } else if (level_kekeruhan_air <= 42) {
        return 1000;
    } else if (level_kekeruhan_air <= 49) {
        return 1000;
    } else {
        return -1; 
	}
}

int main() {
    int ntu[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int level_kekeruhan_air, i;

    printf("Tekan Start\n");
    printf("Masukkan level kekeruhan air (NTU): ");
    scanf("%d", &level_kekeruhan_air);

    int level = -1;
    for (i = 0; i < sizeof(ntu) / sizeof(ntu[0]); ++i) {
        if (level_kekeruhan_air <= ntu[i]) {
            level = i;
            break;
        }
    }

    if (level != -1) {
        printf("Mesin cuci akan mencuci pada level kekeruhan air %d (NTU).\n", ntu[level]);
        printf("Waktu 60 menit\n");
        printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit\n");

        int motor_rpm = systemfuzzy(level_kekeruhan_air);

        if (motor_rpm != -1) {
            printf("Mengaktifkan motor listrik dengan kecepatan %d rpm untuk mengeringkan cucian selama 3 menit\n", motor_rpm);
            printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh\n");
            printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis\n");
            printf("Motor listrik utama berputar dengan kecepatan %d rpm untuk mengeringkan cucian selama 3 menit\n", motor_rpm);
            printf("Cucian telah selesai dan kering.\n\n");
            printf("Terimakasih atas kepercayaannya kepada kami\n");
        } else {
            printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
        }
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }

    return 0;
}
