#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int temp = num, rev=0;
    while(temp>0){
        rev = rev*10+temp%10;
        temp/=10;
    }
    printf("The reverse of %d is %d.", num, rev);
    if(rev==num){
        printf(" Number and its reverse are equal.");
    } else {
        printf(" Number and its reverser are not equal.");
    }
    return 0;
}