#include <stdio.h>

int main(){
    int class, sub;
    printf("Enter class: ");
    scanf("%d", &class);
    fflush(stdin);
    printf("Enter number of subjects failed: ");
    scanf("%d", &sub);
    fflush(stdin);
    switch(class){
        case 1:{
            if(sub>3){
                printf("No grace");
            } else {
                printf("Grace is of 5 marks per subject");
            }
            break;
        }
        case 2:{
            if(sub>2){
                printf("No grace");
            }
            else{
                printf("Grace is of 4 marks per subject");
            }
            break;
        }
        case 3:{
            if(sub>1){
                printf("No grace");
            }
            else{
                printf("Grace is of 5 marks.");
            }
            break;
        }
        default:{
            printf("Invalid class data..!");
        }
    }
    return 0;
}