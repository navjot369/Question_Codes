#include <stdio.h>

int longest(int add_arr1[]) {
    printf("%d", sizeof(add_arr1));


    
}

int main() {
    int num;
    printf("Enter number of entries: ");
    scanf("%d", &num);
    int arr1[num];
    int entry;

    for(int i=0; i<num; i++) {
        scanf("%d", &entry);
        arr1[i] = entry;
    } 

    longest(arr1);   
    //printf("The longest number is %d", longest(&arr1));

}