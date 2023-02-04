#include <stdio.h>

int LCM(int num1, int num2);

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
    int lcm = 1, dig;
    if(num1==1 || num2==1){
        return num2;
    }
    else{
        for(int i=2; i<=num1; i++){
            if(num1%i == 0){
                dig = i;
                num1 /= i;
                break;
            }
            if(num2%dig==0){
                num2 /= dig;
            }
        return dig*LCM(num1, num2);
        }
    }
}