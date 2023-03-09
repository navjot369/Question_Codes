#include <stdio.h>

int power(int, int);

int main(){
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    fflush(stdin);
    printf("Enter index: ");
    scanf("%d", &i);

    printf("%d^%d = %d", num, i, power(num, i));
}

int power(int num, int ind){
    int ans=1;
    for(int j=1; j<=ind; j++){
        ans *= num;
    }
    return ans;
}