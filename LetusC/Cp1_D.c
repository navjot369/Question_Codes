#include <stdio.h>

int main() {
    float faren;
    printf("Enter temperature(in F): ");
    scanf("%f", &faren);

    float cel = ((faren - 32)*5)/9;
    printf("\nTemperature in Centigrade: %.2f", cel);
    return 0;
}