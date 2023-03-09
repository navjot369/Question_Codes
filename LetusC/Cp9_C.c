#include <stdio.h>
#include <math.h>

float sin_x(float);
int fact(int);

int main(){
    float x;
    printf("Enter value of x: ");
    scanf("%f", &x);
    float ans = sin_x(x);
    printf("sin(%.2f) = %.2f", x, ans);
    return 0;
}

float sin_x(float x){
    int flag = 0;
    float ans = x;
    for(int i=3, j=2; j<=10; i+=2, j++){
        if(flag){
            ans += pow(x, i)/fact(i);
            flag = 0;
        }
        else{
            ans -= pow(x, i)/fact(i);
            flag = 1;
        }
        printf("%d %d %f\n",flag,  i, ans);
    }
    return ans;
}

int fact(int num){
    int ans = 1;
    for(int i=1; i<=num; i++){
        ans *= i;
    }
    return ans;
}