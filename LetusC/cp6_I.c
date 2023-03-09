#include <stdio.h>

int main(){
    for(int i=1; i<=30; i++){
        for(int j=1; j<i; j++){
            for(int k=j; k<i; k++){
                if(i*i==j*j+k*k){
                    printf("(%d, %d, %d), ", i, j, k);
                }
            }
        }
    }
    return 0;
}