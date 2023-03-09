#include <stdio.h>

int main(){
    int R, G, B;
    printf("Enter RGB readings: ");
    scanf("%d %d %d", &R, &G, &B);
    
    if(R==0 && G==0 && B==0){
        printf("CMYK values are 0 0 0 1");
    }else{
    float white = (R>G?(R>B?R:B):(G>B?G:B))/255.0;
    float C = (white-R/255.0)/white;
    float M = (white-G/255.0)/white;
    float Y = (white-B/255.0)/white;
    float K = 1-white;
    printf("CMKY vlaues are %.3f %.3f %.3f %.3f", C, M, Y, K);
    }

}