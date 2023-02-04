#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        if(i%2==0){
            for(int j=1; j<=i; j++){
                printf("%c", 64+j);
            }
        } else {
            for(int j=1; j<=i; j++){
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}