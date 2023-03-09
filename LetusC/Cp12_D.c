#include <stdio.h>

#define MEAN(x, y) ((x+y)/2)
#define ABS(x) (x<0?x*(-1):x)
#define UPPER_TO_LOWER(x) (x+32)
#define YES

#ifdef YES
int main(){
    int num1, num2, num3;
    char ch;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    fflush(stdin);
    printf("|%d| = %d\n", num1, ABS(num1));
    printf("Mean of %d and %d is %d\n", num2, num3, MEAN(num2, num3));
    printf("Enter upper case character: ");
    scanf("%c", &ch);
    printf("In lower case, %c is %c", ch, UPPER_TO_LOWER(ch));
}
#endif