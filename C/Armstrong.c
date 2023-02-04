#include <stdio.h>
#include <math.h>

int main(){
    int num, len=0, sum=0, dig;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;

    while(temp>0){
        len += 1;
        temp /= 10;
    }
    
    temp = num;

    while(temp>0){
        dig = temp%10;
        temp /= 10;
        sum += pow(dig, len);
    }
    if(sum==num){
        printf("This number is Armstrong number."); 
    }
    else{
        printf("This number is not Armstrong number.");
    }
}