#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    int greatest;
    greatest=(a>b && a>c ? a: b>c ? b:c);
    printf("The greatest number is %d", greatest);
}