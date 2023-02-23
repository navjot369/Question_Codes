#include <stdio.h>

int main() {
    float x1, x2, x3, y1, y2, y3;
    printf("Enter first point: ");
    scanf("(%f, %f)", &x1, &y1);
    printf("Enter second point: ");
    scanf("\n(%f, %f)", &x2, &y2);
    printf("Enter third point: ");
    scanf("\n(%f, %f)", &x3, &y3);

    float area = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    printf("\nArea of triangle is %f", area);
    if(area!=0){
        printf("\nThe points are not in straight line.");
    } else {
        printf("\nThe points are in straight line.");
    }
    return 0;
}