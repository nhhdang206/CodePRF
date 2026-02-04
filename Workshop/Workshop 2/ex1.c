#include <stdio.h>
#include <math.h>
int main (){
	float n;
	printf("Nhap vao n: ");
	while (scanf("%f", &n) !=1 || n<=0 || n>= 1000){
		printf("Nhap vao n: ");
		fflush(stdin); //xóa vùng đệm, cách tốt nhất
		// while(getchar()!='\n'); cách 2 để Xóa vùng đệm.
	}
	printf("Can bac hai cua %.2f la: %.2f", n, sqrt(n));
	return 0;
}