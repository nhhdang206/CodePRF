#include <stdio.h>
#include <math.h>
int main() {
    float n;
    int count = 0;
    while (1) {   // vòng lặp vô hạn bên ngoài
        while (1) {  
            printf("Nhap vao n: ");
            if (scanf("%f", &n) == 1 && n > 0 && n < 1000) {
                printf("Can bac 2 la: %.2f\n", sqrt(n));
                count++;      // đúng → tăng count
                break;        // thoát vòng nhập
            }
            fflush(stdin);        
		}
        if (count == 5) {   
            break;  
        }
    }
    printf("Da xong xuat sac");
    return 0;
}
