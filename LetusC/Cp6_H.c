#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    float ans = (x-1)/x;
    for(int i=2; i<=7; i++){
        ans += 0.5*pow((x-1)/x, i);
    }
    printf("Amswer is %.2f", ans);
    return 0;
}