#include <stdio.h>

int main(){
    int x=1; //  To print it.
    for(int i=0; i<5; i++){
        for(int j=0; j<=4-i; j++){
            // Loop to print spaces.
            printf(" ");
        }
        x = 1;
        for(int j=1; j<=i/2; j++){
            printf("%d ", x);
            x+=(i-j);
        }
        if(i%2!=0){
            // To print x twice if i is odd.
            printf("%d ", x);
        }
        for(int j=i/2; j>=0; j--){
            printf("%d ", x);
            x-=(i-j);
        }
    printf("\n");
    }
    return 0;
}