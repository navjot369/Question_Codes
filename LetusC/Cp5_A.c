#include <stdio.h>

int main(){
    int time;
    int count = 10;
    while(count>=1){
        printf("\nEnter the working hours: ");
        scanf("%d", &time);
        if(time>40){
            time -= 40;
            printf("The overtime pay is Rs.%d", time*12);
        } else {
            printf("No ovetime pay will be provided.");
        }
        count--;
    }
    
}