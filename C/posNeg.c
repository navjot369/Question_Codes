#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);


    int unit = num/abs(num);

    switch(unit) {
        case 1:{
            printf("This number is positive.");
            break;}
        case -1:{
            printf("This number is negative.");
            break;
        }
        default:{
            printf("This number is zero.");
            break;
        }
    }
}