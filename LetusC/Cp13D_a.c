#include <stdio.h>

int main(){
    int arr[10];
    int num;
    for(int i=0; i<10; i++){
        printf("Enter element(%d): ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search for: ");
    scanf("%d", &num);
    int count=0;
    for(int i=0; i<10; i++){
        if(num==arr[i]){
            count+=1;
        }
    }
    if(count){
        printf("%d appears %d times.", num, count);
    } else {
        printf("%d does not appear at all", num);
    }
    return 0;
}