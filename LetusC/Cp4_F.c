#include <stdio.h>

int main(){
    int w;
    printf("Enter the weight: ");
    scanf("%d", &w);
    if(w<115){
        printf("Flyweight");
    } else if(w>=115 && w<=121){
        printf("Bantamweight");
    } else if(w>=122 && w<=153){
        printf("Featherweight");
    } else if(w>=154 && w<=189){
        printf("Middleweight");
    } else{
        printf("Heavyweight");
    }
    return 0;
}