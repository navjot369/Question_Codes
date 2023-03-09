#include <stdio.h>

int main()
{
    int arr[10];
    int pos=0, neg=0, even=0, odd=0;
    for(int i=0; i<10; i++)
    {
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>=0)
        {
            pos+=1;
        }
        else
        {
            neg+=1;
        }
        
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("number of positive numbers: %d\n", pos);
    printf("number of negative numbers: %d\n", neg);
    printf("number of even numbers: %d\n", even);
    printf("number of odd numbers: %d", odd);
    return 0;
}