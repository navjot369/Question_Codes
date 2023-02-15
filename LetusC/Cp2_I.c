#include <stdio.h>

int main() {
    int amount;
    int R1=0, R2=0, R5=0, R10=0, R50=0, R100=0;
    printf("Enter amount: ");
    scanf("%d", &amount);
    R100 = amount/100;
    amount -= R100*100;
    R50 = amount/50;
    amount -= R50*50;
    R10 = amount/10;
    amount -= R10*10;
    R5 = amount/5;
    amount -= R5*5;
    R2 = amount/2;
    amount -= R2*2;
    R1 = amount;
    printf("Number of notes:\nRe 1 = %d\nRe 2 =%d\nRe 5 = %d\nRe 10 = %d\nRe 50 = %d\nRe 100 = %d",
    R1, R2, R5, R10, R50, R100);
    return 0;


    return 0;
}