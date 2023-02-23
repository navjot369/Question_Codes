#include<stdio.h>
#include<math.h>


int main(){
    float c1, c2, r, x, y;
    printf("Enter the center of the circle: ");
    scanf("(%f, %f)", &c1, &c2);
    printf("Enter the radius of the circle: ");
    scanf("\n%f", &r);
    printf("Enter the point: ");
    scanf("\n(%f, %f)", &x, &y);
    float dis = pow(pow(x-c1, 2)+pow(y-c2, 2), 0.5);
    if(dis<r){
        printf("The point is inside the circle.");
    } else if(dis>r){
        printf("The point is outside the circle.");
    } else {
        printf("The point is on the circle.");
    }
    return 0;
}