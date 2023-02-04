#include <stdio.h>

int main(){
    int i = 1, num, sum = 0;
    printf("Enter number : ");
    scanf("%d", &num);

    do{sum += i;
       i++;
    }while(i<=num);
    printf("Sum is : %d", sum);
}