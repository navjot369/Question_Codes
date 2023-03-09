#include <stdio.h>
#define SMALL(x) (x>96 && x<123)
#define BIG(x) (x>64 && x<91)
#define ALPHA(x) (SMALL(x) || BIG(x))
#define GREAT(x, y) (x>y?x:y)

int main(){
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Greater number is %d", GREAT(num1, num2));
    return 0;
}