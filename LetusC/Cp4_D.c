#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    (a+b>c && a+c>b && b+c>a)?printf("Valid triangle"):printf("Not a valid triangle");
    return 0;
}