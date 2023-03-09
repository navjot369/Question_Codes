#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year%100 == 0?(year%400 == 0?printf("Leap"):printf("Not leap")):(year%4==0?printf("Leap"):printf("Not Leap"));
    return 0;
}