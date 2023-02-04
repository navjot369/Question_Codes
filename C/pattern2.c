#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int avg = (num+1)/2;

    for(int j=1; j<=num; j++){
        printf("*");
    }
    printf("\n");


    for(int i=2; i<=avg; i++) {
        for(int j=1; j<=num; j++) {
            if(j==1 || j==num || j==i || j==(num-i+1)) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=avg-1; i>=2; i--) {
        for(int j=1; j<=num; j++) {
            if(j==1 || j==num || j==i || j==(num-i+1)) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(int i=1; i<=num; i++){
        printf("*");
    }
}