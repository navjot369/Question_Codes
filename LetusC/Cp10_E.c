#include <stdio.h>

int sum(int);

int main(){
    int num;
    printf("Enter number to print sum upto: ");
    scanf("%d", &num);
    printf("Sum of first %d natural number is %d.", num, sum(num));
    return 0;
}

int sum(int num){
    if(num==1){
        return 1;
    } else {
        return num+sum(num-1);
    }
}