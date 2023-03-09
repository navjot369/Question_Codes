#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter: ");
    scanf("%d^%d", &num1, &num2);
    int count = 1, ans = 1;
    while(count<=num2){
        ans *= num1;
        count++;
    }
    printf("%d^%d = %d", num1, num2, ans);
    return 0;
}