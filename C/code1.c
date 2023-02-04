#include<stdio.h>
#include<math.h>
void main(){//500,200,100
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    char y='A';
    for (int i=1;i<=a;i+=2){//i=1,3,5
        for (int j=1;j<=5;j+=1){
            if (j<=i){
                printf("%d",j);
            }
        }
        printf("\n");
        for (int j=1;j<=a+1;j+=1){//j=1,2,3,4,5
            if (j<=(i+1)){
                printf("%c",y);
                y++;
            }
        }
        printf("\n");
    }
}