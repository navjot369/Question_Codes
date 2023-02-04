#include <stdio.h>

int main() {
    int num, times;
    printf("Enter number for pattern: ");
    scanf("%d", &num);
    printf("Enter number for times: ");
    scanf("%d", &times);

    for(int i=0; i<=num-1; i++) {
        for(int x=1; x<=times; x++) {
            for(int j=1; j<=(num-i); j++){
                printf("*");
            }
            for(int j=1; j<=(2*i); j++) {
                printf(" ");
            }
            for(int j=1; j<=(num-i); j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i=2; i<=num; i++){
        for(int x=1; x<=times; x++) {
            for(int j=1; j<=i; j++) {
                printf("*");
            }
            for(int j=1; j<=(2*(num-i)); j++) {
                printf(" ");
            }
            for(int j=1; j<=i; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
}