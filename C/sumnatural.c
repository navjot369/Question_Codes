#include <stdio.h>
#include <math.h>

// Sum of first n natural number.
int main() {
    int num, sum=0, i=1;
    printf("Enter number: ");
    scanf("%d", &num);

    while(i<=num){
        sum += i;
        i += 1;
    }
    printf("Sum of first %d natural number is %d", num, sum);
    int temp = num, len= 0, rev = 0, dig, arm_sum = 0;
    while(temp>0){
        dig = temp%10;
        rev = rev*10 + dig;
        temp /= 10;
        len += 1;
    }
    printf("\nThe length of number is %d", len);
    printf("\nThe reverse of %d is %d", num, rev);

    temp = num;
    while(temp>0){
        dig = temp%10;
        arm_sum += pow(dig, len);
        temp /= 10;
    }
    printf("\n %d", arm_sum);
    num == arm_sum ? printf("\nThis number is armstrong number"):printf("\nThis number is not a Armstrong number.");

}
