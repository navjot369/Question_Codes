#include <stdio.h>

int fibo(int);

int main(){
    int num;
    printf("Enter number of term: ");
    scanf("%d", &num);
    int ans = fibo(num);
    printf("%d term is %d", num, ans);
    return 0;
}

int fibo(int num){
    if(num==1 || num==2){
        return 1;
    } else {
        return fibo(num-1) + fibo(num-2);
    }
}