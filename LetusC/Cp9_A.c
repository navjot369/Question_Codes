#include <stdio.h>
#include <math.h>

void fun1(int, int, int, int, int, int *, float *, float *);

int main(){
    int num1, num2, num3, num4, num5, sum;
    float avg, stand;
    printf("Enter numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    fun1(num1, num2, num3, num4, num5, &sum, &avg, &stand);
    printf("Sum is: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Standard deviation: %.2f\n", stand);
    return 0;
}

void fun1(int n1, int n2, int n3, int n4, int n5, int *sum, float *avg, float *stand){
    int vari;
    *sum = n1+n2+n3+n4+n5;
    *avg = (*sum)/5;
    vari = (pow(*avg-n1, 2)+pow(*avg-n2, 2)+pow(*avg-n3, 2)+pow(*avg-n4, 2)+pow(*avg-n5, 2))/5;
    *stand = pow(vari, 0.5);
}