#include <stdio.h>

int main() {
    int age1, age2, age3;
    printf("Enter age of Ram: ");
    scanf("%d", &age1);
    printf("Enter age of Shyam: ");
    scanf("%d", &age2);
    printf("Enter age of Ajay: ");
    scanf("%d", &age3);

    printf("The youngest of all is ");
    if(age1<age2){
        if(age1<age3){
            printf("Ram.");
        } else if(age3<age1){
            printf("Ajay.");
        } else {
            printf("Ram and Ajay.");
        }
    } else if (age2<age1){
        if(age2<age3){
            printf("Shyam.");
        } else if(age3<age2){
            printf("Ajay.");
        } else {
            printf("Shyam and Ajay.");
        }
    } else {
        if(age3<age1) {
            printf("Ajay.");
        } else if(age1<age3){
            printf("Ram and Shyam.");
        } else {
            printf("Ram, Shyam and Ajay.");
        }
    }
    return 0;
}