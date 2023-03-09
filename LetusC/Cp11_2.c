#include <stdio.h>
#include "Cp11.c"

int fun1();
int fun2();

int main()
{
    printf("Value of i is", i);
    if (1)
    {
        auto int j = 5;
        printf("%d\n", j);
    }
    fun1();
    fun2();
    return 0;
}