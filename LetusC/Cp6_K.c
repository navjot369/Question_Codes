#include <stdio.h>
#include <math.h>

int main(){
    int sum = 0, sum2;
    for(int i=1; i<=100; i++){
        for(int j=1; j<i; j++){
            sum = pow(i, 3) + pow(j, 3);
            for(int x=1; x<=100; x++){
                for(int y=1; y<=x; y++){
                    if(i!=x && j!=y && i!=y && j!=x){
                        sum2 = pow(x, 3)+pow(y, 3);
                        if(sum2 == sum){
                            printf("%d %d %d %d %d\n", sum, i, j, x, y);
                        }else if(sum2>sum){
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}