#include <stdio.h>

int main() {
    int l, b;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    int peri = 2*(l+b);
    int area = l*b;

    printf("Lenght of rope required: %d unit\n", peri);
    printf("Area of carpet required: %d unit square\n", area);
    return 0;
}