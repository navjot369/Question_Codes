#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr1[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr1[i]);
    }

    int arr2[size];
    for(int i=0; i<size; i++)
    {
        arr2[i] = arr1[size-1-i];
    }

    printf("\nOriginal array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d  ", arr1[i]);
    }

    printf("\nReversed array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d  ", arr2[i]);
    }
}