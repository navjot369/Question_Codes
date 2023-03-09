#include <stdio.h>

int main()
{
    //Input the size of array.
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    //Getting input of the array.
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
    printf("\n   Sorting...  \n");

    //Performing sort.
    int key, j;
    for(int i=1; i<size; i++)
    {
        key = arr[i];
        j=i-1;

        while(key<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
        for(int k=0; k<size; k++){
            printf("%d ", arr[k]);
        }printf("\n");
    }


    printf("After sorting, array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}