#include <stdio.h>

int fact(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("%d! = %d", num, fact(num));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}