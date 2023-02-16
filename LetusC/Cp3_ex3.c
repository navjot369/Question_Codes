#include <stdio.h>

int main() {
    float salary, HRA, DA;
    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary<1500){
        HRA = 0.1*salary;
        DA = 0.9*salary;
    } else {
        HRA = 500;
        DA = 0.98*salary;
    }
    float total = salary + HRA + DA;
    printf("Total salary : %f", total);
    return 0;
}