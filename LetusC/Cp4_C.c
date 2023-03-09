#include <stdio.h>

int main(){
    float hard, tensile, carbon;
    printf("Enter hardness: ");
    scanf("%f", &hard);
    printf("Enter tensile: ");
    scanf("\n%f", &tensile);
    printf("Enter Carbon content: ");
    scanf("\n%f", &carbon);
    if(hard>50 && carbon<0.7 && tensile>5600){
        printf("Grade 10");
    } else if(hard>50 && carbon<0.7){
        printf("Grade 9");
    } else if(carbon<0.7 && tensile>5600){
        printf("Grade 8");
    } else if(hard>50 && tensile>5600){
        printf("Grade 7");
    } else if(hard>50 || carbon<0.7 || tensile>5600){
        printf("Grade 6");
    } else {
        printf("Grade 5");
    }
    return 0;
}