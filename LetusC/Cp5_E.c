#include <stdio.h>
#include <math.h>

int main(){
    int i=1, temp, sum=0;
    printf("Armstrong number are: ");
    while(i<=99){
        temp = i;
        while(temp>0){
            sum += pow(temp%10, 2);
            temp /= 10;
        }
        if(sum==i){
            printf("%d ", i);
        }
        sum = 0;
        i++;
    }
    while(i<=500){
        temp = i;
        while(temp>0){
            sum += pow(temp%10, 3);
            temp /= 10;
        }
        if(sum==i){
            printf("%d ", i);
        }
        sum = 0;
        i++;
    }
    return 0;
    
}