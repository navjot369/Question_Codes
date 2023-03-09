#include <stdio.h>

int main(){
    int num, oct=0, rem, mul = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;
    while(num>0){
        rem = num%8;
        num /= 8;
        oct = oct+rem*mul;
        mul *= 10;
    }
    printf("Octal representation of %d is 0o%d", temp, oct);
}