#include <stdio.h>
#include <math.h>

int main(){
    int q, n, p;
    float r, interest;
    for(int i=1; i<=10; i++){
        printf("Enter principle amount: ");
        scanf("%d", &p);
        fflush(stdin);
        printf("Enter rate of interest: ");
        scanf("%f", &r);
        fflush(stdin);
        printf("Enter the number of years: ");
        scanf("%d", &n);
        fflush(stdin);
        printf("Enter times per year: ");
        scanf("%d", &q);
        interest = p*pow(1+r/q, n*q);
        printf("The interest is: %.2f\n", interest);
    }
}