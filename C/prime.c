#include <stdio.h>

int prime(int num);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(prime(num)){
        printf("It is a prime number.");
    }
    else { 
        printf("It is not a prime number.");
    }
    return 0;
}

int prime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}