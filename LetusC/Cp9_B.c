#include <stdio.h>

void fun1(int, int, int, int *, float *);

int main(){
    int num1, num2, num3, avg;
    float percent;
    printf("Enter marks: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    fun1(num1, num2, num3, &avg, &percent);
    printf("Average: %d/300\n", avg);
    printf("Percentage: %.2f%%", percent);
}

void fun1(int n1, int n2, int n3, int *avg, float *percent){
    *avg = n1+n2+n3;
    *percent = *avg/3;
}