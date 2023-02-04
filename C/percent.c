#include <stdio.h>

float calmarks(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Percentage is %f", calmarks(a , b, c));
}

float calmarks(int a, int b, int c){
    float total = a + b + c;
    float per = total/3;
    return per;
}