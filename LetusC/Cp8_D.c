#include <stdio.h>

int year(int);

int main(){
    int num;
    printf("Enter year: ");
    scanf("%d", &num);
    if(year(num)){
        printf("%d is a Leap year", num);
    } else {
        printf("%d is not a Leap year", num);
    }
    return 0;

}

int year(int num){
    if(num%100==0){
        if(num%400==0){
            return 1;
        } else {
            return 0;
        }
    }else{
        if(num%4==0){
            return 1;
        }else{
            return 0;
        }
    }
}