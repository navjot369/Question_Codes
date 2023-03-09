#include <stdio.h>

int main()
{
    //Getting size of array.
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    //Input the array.
    int arr[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr[i]);
    }

    //Printing array before sorting.
    printf("Array before sorting: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n    Sorting...   \n");

    //Performing bubble sort.
    int temp; // Temporary variable.
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            /*If any element in the array is less than its preceding element, 
            then their values get swapped.*/
            if(arr[j+1]<arr[j])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorting: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}