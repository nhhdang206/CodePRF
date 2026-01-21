#include <stdio.h>
int main() {
    int soTien;
    int soKwH;
    printf("Nhap so KwH: ");
    scanf("%d", &soKwH);
    if (soKwH <= 100) {
        soTien = soKwH * 950;
    } 
    else if (soKwH <= 150) {
        soTien = (100 * 950) + (soKwH - 100) * 1250;
    } 
    else if (soKwH <= 200) {
        soTien = (100 * 950) + (50 * 1250) + (soKwH - 150) * 1350;
    } 
    else {
        soTien = (100 * 950) + (50 * 1250) + (50 * 1350) + (soKwH - 200) * 1550;
    }
    printf("So tien dien la: %d VND\n", soTien);
    return 0;
}