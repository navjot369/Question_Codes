#include<stdio.h>
#include<math.h>

int main() {
    float a;
    printf("Enter angle(in rad): ");
    scanf("%f", &a);

    printf("\nsin(%.2f) = %.2f", a, sinf(a));
    printf("\ncos(%.2f) = %.2f", a, cosf(a));
    printf("\ntan(%.2f) = %.2f", a, tanf(a));
    printf("\ncosec(%.2f) = %.2f", a, 1/sinf(a));
    printf("\nsec(%.2f) = %.2f", a, 1/cosf(a));
    printf("\ncot(%.2f) = %.2f", a, 1/tanf(a));
    return 0;

}