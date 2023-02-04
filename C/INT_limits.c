#include <stdio.h>
#include <limits.h>

int main(){
	printf("Minimum int value:%d\n"
	"Maximun int value:%d\n"
	"Size of int in bytes:%zu\n"
	"Size of int in bits:%zu\n"
	"Maximum unsigned int value:%d\n",
	INT_MAX, INT_MIN, sizeof(int), sizeof(int) * CHAR_BIT, UINT_MAX);
}

