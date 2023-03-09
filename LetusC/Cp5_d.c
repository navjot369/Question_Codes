#include <stdio.h>

int main(){
    int i=1;
    while(i<=255){
        printf("   %d   %c ", i, i);
        if(i%10==0){
            printf("\n");
        }   
        i++;
    }
    return 0;
}