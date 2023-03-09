#include <stdio.h>
#include "mensuration.h"

int main()
{
    int user;
    printf("1.Circle\n2.Square\n3.Rectangle\nEnter choice: ");
    scanf("%d", &user);
    switch (user)
    {
    case 1:
    {
        float radius;
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        float area_circle = A_CIRCLE(radius);
        float peri_circle = P_CIRCLE(radius);
        printf("Area of circle is %.2f\nCircumference of Circle is %.2f.", area_circle, peri_circle);
        break;
    }
    case 2:
    {
        float side;
        printf("Enter the side of square: ");
        scanf("%f", &side);
        float area_square = A_SQUARE(side);
        float peri_square = P_SQUARE(side);
        printf("Area of square is %.2f\nPerimeter of square is %.2f.", area_square, peri_square);
        break;
    }
    case 3:
    {
        float length, breadth;
        printf("Enter the length of rectangle: ");
        scanf("%f", &length);
        printf("Enter the breadth of rectangle: ");
        scanf("%f", &breadth);
        float area_rectangle = A_RECT(length, breadth);
        float peri_rectangle = P_RECT(length, breadth);
        printf("Area of rectangle is %.2f\nPerimeter of rectangle is %.2f", area_rectangle, peri_rectangle);
        break;
    }
    default:printf("Invalid Input!!");
    }
    return 0;
}