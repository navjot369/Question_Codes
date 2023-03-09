#include <stdio.h>

int main(){
    for(int i=1; i<=6; i++){
        for(float j=5.5; j<=12.5; j+=0.5){
            printf("For x=%d and y=%f, i= %f\n", i, j, 2+(j+0.5*((int)i)));
        }
    }
    return 0;
}