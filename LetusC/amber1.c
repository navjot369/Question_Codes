#include <stdio.h>
#include <math.h>

int main(){
    int test, num, user, dig;
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        scanf("%d", &num);
        scanf("%d", &user);
        for(int j=num/2; j>=1; j--){
            dig = user/pow(100,(j-1));
            dig %= 100;
            switch(dig){
                case 00:{
                    printf("A");
                    break;}
                case 01:{
                    printf("C");
                    break;}
                case 10:{
                    printf("G");
                    break;}
                case 11:{
                    printf("T");
                    break;}
            }
        }
    }
    return 0;
}