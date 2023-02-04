#include <stdio.h>

int LCM(int num1, int num2);
int max(int num1, int num2);

int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("LCM of %d and %d is %d", a, b, LCM(a, b));
    return 0;
}

int LCM(int num1, int num2){
    for(int i=max(num1, num2); i<=num1*num2; i++){
        if(num1%i==0 && num2%i==0){
            return i;
        }
    }
}

int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}