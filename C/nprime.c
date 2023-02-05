#include <stdio.h>

int nprime(int num);
int isprime(int num);

int main(){
    int num;
    printf("Enter number of prime number reqiured: ");
    scanf("%d", &num);

    nprime(num);
    return 0;
}

int nprime(int num){
    printf("First %d prime numbers are: 2");
    for(int count=1, i=3; count!=num; i++){
        if(isprime(i)){
            printf(", %d", i);
            count += 1;
        }
    }
    return 0;
}

int isprime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
   return 1;
}
