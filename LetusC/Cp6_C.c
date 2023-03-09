#include <stdio.h>

int main(){
    float sum=0, fact=1;
    for(float i=1; i<=7; i++){
        for(float j=1; j<=i; j++){
            fact *= j;
        }
        sum += i/fact;
        printf("\n%f %f", fact, sum);
        fact = 1; 
    }
    printf("\nSum is %f", sum);
    return 0;
}