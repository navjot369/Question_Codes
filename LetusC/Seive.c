// Seive of Eratosthenes.
#include <stdio.h>

int main()
{
    // Initializing array.
    int arr[100];
    for(int i=0; i<100; i++)
    {
        arr[i] = i+1;
    }

    //Main operation
    for(int i=1; i<100; i++)
    {
        if(arr[i]!=0)
        {
            for(int j=i+1; j<100; j++)
            {
                if(arr[j]%arr[i]==0)
                {
                    arr[j] = 0;
                }
            }
        }
    }

    //Printing all prime numbers.
    printf("Prime numbers: ");
    for(int i=1; i<100; i++)
    {
        if(arr[i]!=0)
        {
            printf("%d, ", arr[i]);
        }
    }
}