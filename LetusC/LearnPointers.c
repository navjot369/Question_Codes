#include <stdio.h>

int main(){
    int i=3;
    int *j = &i;
    printf("Value of i=%d\n", i);
    printf("Address of i=%u\n", &i);
    printf("Value of i=%d\n", *(&i));
    printf("Value of j=%u\n", j);
    printf("Value of i=%d", *j);
    return 0;
}