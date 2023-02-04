#include <stdio.h>

void main() {
    /*
    int a, b, what;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    printf("Enter operation: ");
    scanf("%d", &what);

    switch(what) {
        case 1:{
            printf("%d", a+b);
            break;
        } case 2:{
            printf("%d", a-b);
            break;
        } case 3:{
            printf("%d", a*b);
            break;
        } default:{
            printf("Invalid input.");
        }

    }*/

    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:{
            printf("This is month of 31 days");
            break;
        }
    }
}