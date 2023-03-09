#include <stdio.h>

void factor(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d" ,&num);
    factor(num);
    return 0;
}

void factor(int num){
    for(int i=2; i<=num; i++){
        if(num%i==0){
            factor(num/i);
            printf("%d, ", i);
            break;
        }
    }
}
