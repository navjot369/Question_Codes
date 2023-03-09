#include <stdio.h>
#include <math.h>

int main(){
    float angle;
    printf("Enter angle: ");
    scanf("%f", &angle);

    float sinint = sinf(angle)*sinf(angle);
    float cosint = cosf(angle)*cosf(angle);
    float sum = sinint + cosint;
    sum==1?printf("Formula works"):printf("Formula did not work");
    return 0;
}