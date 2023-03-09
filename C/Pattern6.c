#include <stdio.h>

int main(){
    int i=1, *x;
    int j=2, *y;
    y=&j;
    printf("%u\n", &j);
    printf("Address of i=%u\n", &i);
    x=&i;
    printf("Value of x=%u\n", x);
    printf("Value at x=%d\n", *x);
    x--;
    printf("After increamenting, x = %u\n", x);
    printf("Value at x=%d\n", *x);
    printf("%d", x-y);
}