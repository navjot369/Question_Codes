#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==b && a==c){
        printf("Equilateral triangle");
    } else if(a==b || a==c || b==c){
        printf("Isoscles triangle");
    } else{
        printf("Scalene triangle");
    }
    int g = a>b?(a>c?a:c):(b>c?b:c);
    if(2*g*g==a*a+b*b+c*c){
        printf(" and right angle trianlge.");
    } else {
        printf(" and not a right angle triangle.");
    }
    return 0;
}