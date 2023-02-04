#include <stdio.h>
#include <math.h>
#define pi 3.14

int areasquare(int side){
    return (int) pow(side, 2);
}
int arearectange(int l, int b){
    return (int) l*b;
}
float areacircle(int radius){
    return pi*pow(radius, 2);
}

int main(){
    char shape;
    printf("Enter the shape: ");
    scanf("%c", &shape);

    switch(shape){
        case 'S':{
            int side;
            printf("Enter the side of square: ");
            scanf("%d", &side);
            printf("Area of square with side %d is %d", side, areasquare(side));
            break;
        }
        case 'R':{
            int l,b;
            printf("Enter length of rectange: ");
            scanf("%d", &l);
            printf("Enter the breadth of rectangle: ");
            scanf("%d", &b);
            printf("Area of rectange with length %d and breadth %d is %d", l, b, arearectange(l, b));
            break;
        }
        case 'C':{
            int radius;
            printf("Enter the radius of circle: ");
            scanf("%d", &radius);
            printf("Area of circle with radius %d is %f", radius, areacircle(radius));
            default:printf("Invalid input!");
            break;
        }
    }
    return 0;

}
