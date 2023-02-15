#include <stdio.h>

int main() {
    float len, bre, peri, rarea;
    printf("Enter the length of rectange: ");
    scanf("%f", &len);
    printf("Enter the breadth of rectange: ");
    scanf("%f", &bre);
    peri = 2*(len+bre);
    rarea = len*bre;
    printf("Perimeter of rectangle: %.2f\nArea of rectange: %.2f", peri, rarea);

    float radius, circum, carea, pi = 3.14;
    printf("\n\nEnter radius of circle: ");
    scanf("%f", &radius);
    circum = 2*pi*radius;
    carea = pi*radius*radius;
    printf("Circumfrence of circle: %.2f\nArea of circle: %.2f", circum, carea);
    return 0;

}