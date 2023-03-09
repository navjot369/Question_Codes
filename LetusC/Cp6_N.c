#include <stdio.h>

int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6-i+1; j++){
            printf("%c ", 64+j);
        }
        if(i==1){
            printf("G ");
        }else{
            for(int j=1; j<=2*(i-1)+1; j++){
                printf("  ");
            }
        }
        for(int j=6-i+1; j>=1; j--){
            printf("%c ",64+j);
        }
        printf("\n");
    }
}