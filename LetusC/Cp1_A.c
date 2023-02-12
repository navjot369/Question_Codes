#include <stdio.h>

int main() {
    int salary;
    printf("Enter salary: ");
    scanf("%d", &salary);
    float total = salary + 0.4*salary + 0.2*salary;
    printf("Total salary is %.2f", total);
}