#include <stdio.h>

int sum_nat(int num);

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Sum upto %d natural numbers is %d.", num, sum_nat(num));
	return 0;
	
}

int sum_nat(int num) {
	if(num==1) {
		return 1;
	} else {
	return num+sum_nat(num-1);
	}
}