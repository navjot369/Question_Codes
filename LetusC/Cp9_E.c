#include <stdio.h>
#include <math.h>

float area(float, float, float);

int main(){
    float a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float Area = area(a, b, c);
    printf("Area of triangle is %.2f", Area);
    return 0;
}

float area(float a, float b, float c){
    float s, area, area2;
    area2 = s*(s-a)*(s-b)*(s-c);
    area = pow(area2, 0.5);
    return area;

}