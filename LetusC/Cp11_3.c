#include <stdio.h>
#define PI 3.14
#define EQUAL =
#define TABLE(x) ({for(int i=1; i<=10; i++)printf("%d\n", i*x);})


int main()
{
    TABLE(5);
    int i EQUAL 8;
    printf("%d", i);
    return 0;
}