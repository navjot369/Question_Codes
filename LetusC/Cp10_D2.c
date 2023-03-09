#include <stdio.h>

void bin(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Binary of %d is ", num);
    bin(num);
    return 0;
}

void bin(int num){
    if(num==0){
        return;
    } else {
        bin(num/2);
        printf("%d", num%2);
    }
}