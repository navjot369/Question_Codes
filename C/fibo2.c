#include <stdio.h>

int fibo(int num);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Term %d is: %d",num,  fibo(num));
}

int fibo(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    return fibo(num-1) + fibo(num-2);
}