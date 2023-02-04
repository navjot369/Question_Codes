#include <stdio.h>

int main() {
    int num, ele, x;
    printf("Enter number of items: ");
    scanf("%d", &num);
    int arr1[num];
    for(int i=0; i<num; i++) {
        printf("Enter item(%d): ", i+1);
        scanf("%d", &ele);
        arr1[i] = ele;
    }
    printf("Enter the entry to be searched: ");
    scanf("%d", &x);

    int mid, low, high;
    low = 0;
    high = num-1;
    int flag = 0;
    while(low<=high){
        mid = (low+high)/2;
        if(arr1[mid]==x){
            printf("\nThe element is at %d", mid+1);
            flag=1;
            break;
        }
        else if(arr1[mid]>x){
            high = mid-1;
        }
        else if(arr1[mid]<x){
            low = mid+1;
        }
    }
    if(flag==0){
        printf("Element not found.");
    }
}