#include <stdio.h>

int main() {
    int num, ele;
    printf("Enter number of elements to be added: ");
    scanf("%d", &num);

    int arr1[num];
    for(int i=0; i<num; i++){
        printf("Enter element(%d): ", i);
        scanf("%d", &ele);
        arr1[i] = ele;
    }
    int min_index;
    for(int x=0; x<num; x++){
        min_index = x;
        for(int i=x+1; i<num; i++){
            if(arr1[i]<arr1[min_index]){
                min_index = i;
            }
        }
        int temp = arr1[x];
        arr1[x] = arr1[min_index];
        arr1[min_index] = temp;
    }
    for(int i=0; i<num; i++){
        printf("%d  ", arr1[i]);
    }
}