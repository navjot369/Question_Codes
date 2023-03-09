#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array before interchanging: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    for(int i=1; i<size; i+=2)
    {
        arr[i-1] = arr[i-1] + arr[i];
        arr[i] = arr[i-1] - arr[i];
        arr[i-1] = arr[i-1] - arr[i];
    }

    printf("\nArray after interchanging: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}