#include <stdio.h>

int main() {
    float diem_cc, diem_gk, diem_ck; 
    float diem_tong_ket;
    char diem_chu; 

    printf("--- Tinh diem hoc phan ---\n");

    // Sử dụng vòng lặp để kiểm tra điểm chuyên cần
    do {
        printf("Nhap diem chuyen can (10%%): ");
        scanf("%f", &diem_cc);
        if (diem_cc < 0 || diem_cc > 10) printf("Loi: Diem phai tu 0 den 10. Vui long nhap lai!\n");
    } while (diem_cc < 0 || diem_cc > 10);

    // Kiểm tra điểm giữa kỳ
    do {
        printf("Nhap diem giua ky (30%%): ");
        scanf("%f", &diem_gk);
        if (diem_gk < 0 || diem_gk > 10) printf("Loi: Diem phai tu 0 den 10. Vui long nhap lai!\n");
    } while (diem_gk < 0 || diem_gk > 10);

    // Kiểm tra điểm cuối kỳ
    do {
        printf("Nhap diem cuoi ky (60%%): ");
        scanf("%f", &diem_ck);
        if (diem_ck < 0 || diem_ck > 10) printf("Loi: Diem phai tu 0 den 10. Vui long nhap lai!\n");
    } while (diem_ck < 0 || diem_ck > 10);

    // --- Giữ nguyên phần logic tính toán của bạn ---
    diem_tong_ket = (diem_cc * 0.1) + (diem_gk * 0.3) + (diem_ck * 0.6);
    printf("\n--------------------------\n");
    printf("Diem tong ket so: %.1f\n", diem_tong_ket);

    if (diem_tong_ket >= 8.5) diem_chu = 'A';
    else if (diem_tong_ket >= 7.0) diem_chu = 'B';
    else if (diem_tong_ket >= 5.5) diem_chu = 'C';
    else if (diem_tong_ket >= 4.0) diem_chu = 'D';
    else diem_chu = 'F';

    printf("Diem chu: %c\n", diem_chu);

    if (diem_cc >= 4.0 && diem_gk >= 4.0 && diem_ck >= 4.0 && diem_chu != 'F') {
        printf("Ket qua: DAT (Chuc mung ban!)\n");
    } else {
        printf("Ket qua: TRUOT (Can hoc lai)\n");
        if (diem_chu == 'F') printf("-> Ly do: Diem tong ket qua thap.\n");
        else printf("-> Ly do: Co diem thanh phan duoi 4.0 (Diem liet).\n");
    }

    return 0;
}