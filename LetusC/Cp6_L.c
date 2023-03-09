#include <stdio.h>

int main(){
    printf("12:00 Midnight\n");
    for(int i=1; i<12; i++){
        printf("%d:00 AM\n", i);
    }
    printf("12:00 Noon\n");
    for(int i=1; i<12; i++){
        printf("%d:00 PM\n", i);
    }
    return 0;
}