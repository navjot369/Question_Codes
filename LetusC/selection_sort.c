#include <stdio.h>

int main()
{
    // Input the size of array.
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    // Getting input of array
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element(%d): ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing array before sorting(for comparison)
    printf("Array before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("   Sorting...\n");

    // Performing selection sorting.
    int min_index, temp;
    for (int i = 0; i < size - 1; i++)
    {
        min_index = i; // Suppose the i element is the minimum in all its succedding elements.
        for (int j = i + 1; j < size; j++)
        {
            /* It is checked for all its preceding element if any element is
            less than that element and min is updated.*/
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Updated min is then swapped with i element.
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        printf("%d %d %d\n", i, min_index, temp);
    }

    // Printing array after sorting.
    printf("Array after sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}