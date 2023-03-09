#include <stdio.h>
#include <stdlib.h>

int main(){
    int user, num, fact;
    while(1){
        printf("\n1.Factorial of number\n2.Prime or not\n3.Even or Odd\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &user);
        fflush(stdin);
        switch(user){
            case 1:{
                printf("Enter number: ");
                scanf("%d", &num);
                fflush(stdin);
                fact = 1;
                for(int i=1; i<=num; i++){
                    fact *= i;
                }
                printf("%d! = %d", num, fact);
                break;
            }
            case 2:{
                printf("Enter number: ");
                scanf("%d", &num);
                fflush(stdin);
                for(int i=2; i<=num; i++){
                    if(num==i){
                        printf("Prime number");
                        break;
                    }
                    if(num%i==0){
                        printf("Not prime");
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Enter number: ");
                scanf("%d", &num);
                fflush(stdin);
                if(num%2==0){
                    printf("Even");
                } else{
                    printf("Odd");
                }
                break;
            }
            case 4:
                exit(1);
            default:{
                printf("Invalid choice..!");
            }
        }
    }

}