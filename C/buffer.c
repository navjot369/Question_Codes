#include <stdio.h>

void main() {
    int num;
    char chr;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the character: ");
    scanf("\n%c", &chr);
    printf("The number is %d and character is %c, is it clear", num, chr);
}