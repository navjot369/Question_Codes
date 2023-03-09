#include <stdio.h>

int main(){
    int number;
    printf("Enter roll number: ");
    scanf("%d", &number);

    int sum = 0, key = number;
    while(key>0){
        sum += key%10;
        key /= 10;
    }
    printf("The sum is %d", sum);
    printf("\nThe matching character is %c", sum+64);
}
