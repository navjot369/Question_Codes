#include <stdio.h>

void swap(int *, int *, int *);

int main(){
    int x, y, z;
    printf("Enter value of x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);
    swap(&x, &y, &z);
    printf("After swapping, x= %d, y= %d and z= %d", x, y, z);
    return 0;
}

void swap(int *a, int *b, int *c){
    *a = *a + *b + *c;
    *b = *a - (*b + *c);
    *c = *a - (*b + *c);
    *a = *a - (*b + *c);
}