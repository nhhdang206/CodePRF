#include <stdio.h>
int main() {
    float a = 5;
    float b = 10.216;
    float c = a + b;
    printf("a = %.0f\n", a);
    printf("b = %.3f\n", b);
    printf("%.0f + %.3f = %.2f", a, b, c);
    return 0;
}
