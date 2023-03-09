#include <stdio.h>

int main(){
    int pol = 100000;
    for(int i=1; i<=10; i++){
        pol -= 0.1*pol;
        printf("Population %d before: %d\n", i, pol);
    }
    return 0;
}