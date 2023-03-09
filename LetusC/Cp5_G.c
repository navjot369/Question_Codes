#include <stdio.h>

int main(){
    int num=0, pos=0, neg=0, zero=0;
    do{
        printf("Enter number(char to abort): ");
        int doabort = scanf("%d", &num);
        if(doabort){
            if(num>0){
                pos++;
            } else if(num<0){
                neg++;
            } else{
                zero++;
            }
        } else{
            break;
            }
    }while(1);
    printf("Postive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nZeros: %d", zero);
    return 0;
}
