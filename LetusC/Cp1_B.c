#include <stdio.h>

int main() {
    float num;
    printf("Enter the value in km: ");
    scanf("%f", &num);
    float numm = num*1000;
    printf("Value in m: %.2f\nValue in feet: %.2f\nValue in inch: %.2f\nValue in centimeter: %.2f", numm, numm*3.281, numm*39.37, numm*100);
    return 0;
}