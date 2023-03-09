#include <stdio.h>

void modify(int *, int);

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr[i]);
    }

    modify(arr, size);
    
    printf("Array after modifying: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", *(arr+i));
    }
}

void modify(int *array, int size)
{
    for(int i=0; i<size; i++)
    {
        *(array+i) *= 3; 
    }
}