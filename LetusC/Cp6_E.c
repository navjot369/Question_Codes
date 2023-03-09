#include <stdio.h>

int main(){
    int pro1=2000, pro2=6000, year=0;
    while(1){
        pro1 += 1000;
        pro2 += 540;
        year += 1;
        if(pro1>pro2){
            printf("Years reqiured: %d", year);
            break;
        }
    }
    return 0;
}