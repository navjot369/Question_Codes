#include <stdio.h>

int main(){
    float length, breadth;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    float peri = 2*(length+breadth);
    float area = length*breadth;
    printf("Perimeter = %.2f\nArea = %.2f", peri, area);
    if(peri>area){
        printf("\nPerimeter is greater than Area.");
    }else if(peri<area){
        printf("\nArea is greater than perimeter.");
    } else {
        printf("\nPerimter is equal to the Area.");
    }
    return 0;
}