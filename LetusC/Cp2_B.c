#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev = 0;
    while(num > 0){
        rev = rev*10 + num%10;
        num /= 10;
    }
    printf("Reverse is: %d", rev);
    return 0;
}