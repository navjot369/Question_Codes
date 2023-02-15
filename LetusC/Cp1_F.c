#include <stdio.h>

int main() {
    int side1 = 1189;
    int side2 = 841;
    printf("Size of A0: %d X %d", side1, side2);

    for(int i=1; i<=8; i++) {
        if(side1>side2) {
            side1 /= 2;
            printf("\nSize of A%d: %d X %d", i, side2, side1);
        } else {
            side2 /= 2;
            printf("\nSize of A%d: %d X %d", i, side1, side2);
        }
    }   
    return 0;
}
