#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 1, fact = 1;
    while(count<=num){
        fact *= count;
        count++;
    }
    printf("%d! = %d", num, fact);
    return 0;
}