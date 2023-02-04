#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, ele, dig;
    num = 100000;

    int arr1[num];
    for(int i=0; i<num; i++){
        arr1[i] = rand()*10000;
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