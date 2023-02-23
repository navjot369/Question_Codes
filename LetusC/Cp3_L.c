#include <stdio.h>

int main(){
    float x, y;
    printf("Enter the point: ");
    scanf("(%f, %f)", &x, &y);
    if(x==0){
        if(y == 0){
            printf("The point is on origin.");
        } else {
            printf("The point is on Y-axis.");
        }
    } else if(y==0){
        printf("The point is on X-axis.");
    } else {
        printf("The point is neither on any axis or origin.");
    }
    return 0;
}