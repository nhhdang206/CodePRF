#include <stdio.h>

int main() {
    float diem_cc, diem_gk, diem_ck; 
    float diem_tong_ket;
    char diem_chu; 

    printf("--- Tinh diem hoc phan ---\n");
    printf("Nhap diem chuyen can (10%%): ");
    scanf("%f", &diem_cc);
    printf("Nhap diem giua ky (30%%): ");
    scanf("%f", &diem_gk);
    printf("Nhap diem cuoi ky (60%%): ");
    scanf("%f", &diem_ck);

    diem_tong_ket = (diem_cc * 0.1) + (diem_gk * 0.3) + (diem_ck * 0.6);
    printf("Diem tong ket so: %.1f\n", diem_tong_ket);

    if (diem_tong_ket >= 8.5) {
        diem_chu = 'A';
    } else if (diem_tong_ket >= 7.0) {
        diem_chu = 'B';
    } else if (diem_tong_ket >= 5.5) {
        diem_chu = 'C';
    } else if (diem_tong_ket >= 4.0) {
        diem_chu = 'D';
    } else {
        diem_chu = 'F';
    }

    printf("Diem chu: %c\n", diem_chu);

    if (diem_cc >= 4.0 && diem_gk >= 4.0 && diem_ck >= 4.0 && diem_chu != 'F') {
        printf("Ket qua: DA TOT NGHIEP (Dat yeu cau)\n");
    } else {
        printf("Ket qua: TRUOT (Can hoc lai)\n");
        if (diem_chu == 'F') printf("-> Ly do: Diem tong ket qua thap.\n");
        else printf("-> Ly do: Co diem thanh phan duoi 4.0 (Diem liet).\n");
    }

    return 0;
}