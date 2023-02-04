#include <stdio.h>

int factorial(int num);

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d! = %d", number, factorial(number));
}

int factorial(int num){
    if(num==1){
        return 1;
    }
    int fac;
    fac = num*factorial(num-1);

}