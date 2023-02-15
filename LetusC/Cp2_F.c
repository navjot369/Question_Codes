// Formula to find the wind chill factor
// wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v^0.16

#include <stdio.h>
#include <math.h>

int main() {
    float t, v, wch;
    printf("Enter temperature: ");
    scanf("%f", &t);
    printf("Enter velocity: ");
    scanf("%f", &v);
    wch = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v, 0.16);
    printf("\nThe wind chill factor will be: %.2f", wch);
    return 0;
}