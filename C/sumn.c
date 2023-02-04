#include <stdio.h>

int sumn(int num);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Sum of natural numbers upto %d is %d", num, sumn(num));
    return 0;
}

int sumn(int num){
    if(num==0){
        return 0;
    }
    int sum;
    sum = num + sumn(num-1);
    return sum;
}