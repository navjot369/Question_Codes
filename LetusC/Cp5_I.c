#include <stdio.h>

int main(){
    int num, small=4442424, large=0;
    while(1){
        printf("Enter the number: ");
        int doabort = scanf("%d", &num);
        if(doabort){
            if(num>large){
                large = num;
            } else if (num<small){
                small = num;
            }           
        } else {
            break;
        }
    }
    int range = large - small;
    printf("The range is %d", range);
}