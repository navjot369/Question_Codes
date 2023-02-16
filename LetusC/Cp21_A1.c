#include <stdio.h>
#define _BV(x) (1<<x)

int main() {
    int num, andmark, k;
    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=0; i<=6; i++) {
        andmark = _BV(i);
        k = num & andmark;
        if (k>0){
            switch(i) {
                case 0:{
                    printf("\nVoilet");
                    break;
                }
                case 1:{
                    printf("\nIndigo");
                    break;
                }
                case 2:{
                    printf("\nBlue");
                    break;
                }
                case 3:{
                    printf("\nGreen");
                    break;
                }
                case 4:{
                    printf("\nYellow");
                    break;
                }
                case 5:{
                    printf("\nOrange");
                    break;
                }
                case 6:{
                    printf("\nRed");
                    break;
                }
            }
        }
    }
    return 0;
}