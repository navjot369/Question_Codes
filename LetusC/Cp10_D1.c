#include <stdio.h>

void bin(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Binary of %d is: ", num);
    bin(num);
    return 0;
}

void bin(int num){
    int ans=1;
    while(num){
        ans = ans*10 + num%2;
        num /= 2;
    }
    while(ans>1){
        printf("%d", ans%10);
        ans /= 10;
    }
}

