#include <stdio.h>

int fibo(int num);
//this is the main function.
int main(){
    int num;
    // Taking input from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    fibo(num);
    return 0;
}

int fibo(int num){
    int a=0, b=1;
    printf("0");
    for(int i=1; i<num; i++){
        int temp = a+b;
        a = b;
        b = temp;
        printf(", %d", a);
    }
}
