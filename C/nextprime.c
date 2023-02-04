#include <stdio.h>

int nextprime(int num);
int isprime(int num);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num<2){
        num = 2;
    }

    printf("Next prime number after %d is %d", num, nextprime(num));
}

int nextprime(int num){
    int temp = num+1;
    while(1){
        if(isprime(temp)){
        return temp;
        break;
        }
        temp++;
    }

}

int isprime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}