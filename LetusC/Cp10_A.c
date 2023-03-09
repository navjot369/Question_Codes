#include <stdio.h>

int sum_dig(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int ans = sum_dig(num);
    printf("Sum of its digits are %d", ans);
    return 0;
}

int sum_dig(int num){
    if(num==0){
        return 0;
    } else {
        return num%10 + sum_dig(num/10);
    }
}