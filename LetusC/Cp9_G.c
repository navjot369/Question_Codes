#include <stdio.h>

int hcf(int, int);

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int gcd = hcf(num1, num2);
    printf("HCF(%d, %d) = %d", num1, num2, gcd);
    return 0;
}

int hcf(int a, int b){
    int s = (a>b)? b: a;
    for(int i=s-1; i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}