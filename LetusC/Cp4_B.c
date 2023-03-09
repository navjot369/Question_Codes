#include <stdio.h>

int main(){
    char user;
    printf("Enter character: ");
    scanf("%c", &user);
    if(user>=65 && user<=90){
        printf("%c is a Capital letter.", user);
    } else if(user>=97 && user<=122){
        printf("%c is a small letter.", user);
    } else if(user>=48 && user<=57){
        printf("%c is a digit.", user);
    } else if((user>=0 && user<= 47)||(user>=58 && user<=64)||(user>=91 && user<=96)||(user>=123 && user<=127)){
        printf("%C is a special symbol.", user);
    } else{
        printf("%c is other character.", user);
    }
    return 0;
}