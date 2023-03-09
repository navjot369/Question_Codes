#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num = 21, user, comp;
    while(num>0){
        printf("\nNumber of sticks: %d", num);
        printf("\nEnter your number: ");
        scanf("%d", &user);
        if((user<1 || user>4) || (user>num)){
            printf("Invalid Choice!!");
            continue;
        } else{
            num -= user;
        }
        if(num==0){
            printf("You lose!! You picked up last stick.%c", 1);
            break;
        }
        if(num%5==0){
            comp = 4;
        } else if(num%5==4){
            comp = 3;
        } else if(num%5==3){
            comp = 2;
        } else if(num%5==2){
            comp = 1;
        }
        printf("Computer choice: %d", comp);
        num -= comp;
    }
    return 0;
}