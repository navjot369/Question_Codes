#include <stdio.h>

int main(){
    for(int i=1; i<=300; i++){
        for(int j=2; j<i;){
            if(i%j==0){
                break;
            }
            j++;
            if(i==j){
                printf("%d, ", i);
            }
        }
    }
    return 0;
}