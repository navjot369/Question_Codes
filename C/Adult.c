#include <stdio.h>

int main(){
    int num;
    printf("Enter age: ");
    scanf("%d", &num);

    if(num>=18){
        printf("Adult");
    } else {
        printf("Not adult");
    }
}