#include <stdio.h>
#include "interest.h"

int main(){
    int year;
    float principle, rate;
    printf("Enter principle, rate of interest and time: ");
    scanf("%f %f %d", &principle, &rate, &year);
    float SI = SI(principle, rate, year);
    float amount = AMOUNT(principle, rate, year);
    printf("Simple interest is %.2f\n", SI);
    printf("Amount is %.2f", amount);
    return 0;
}