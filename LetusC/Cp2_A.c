#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int temp = num, sum = 0;

    while(temp > 0) {
        sum += temp % 10;
        temp = temp / 10;
    }
    printf("Sum of digits are: %d", sum);
    return 0;
}