#include <stdio.h>

int main(){
    int num=1;
    for(int i=1; i<=4; i++){
        for(int j=4-i; j>=1; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", num++);
        }
    printf("\n");
    }

}