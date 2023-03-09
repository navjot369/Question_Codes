#include <stdio.h>

void prime(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    prime(num);
    return 0;
}

void prime(int num){
    if(num==1){
        return;
    } else {
        for(int i=2; i<=num; i++){
            if(num%i==0){
                printf("%d, ", i);
                prime(num/i);
                return;
        }
    }
}

}