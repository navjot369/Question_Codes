#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    float s = (a+b+c)/2;
    float area_sqr = s*(s-a)*(s-b)*(s-c);
    float area = pow(area_sqr, 0.5);
    printf("Area of triange is %f", area);
    return 0;
}