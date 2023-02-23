#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num<0){
        num *= -1;
        printf("|-%d| = %d", num, num);
    } else {
        printf("|%d| = %d", num, num);
    }
    return 0;
}