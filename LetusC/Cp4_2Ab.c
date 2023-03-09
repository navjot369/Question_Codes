#include <stdio.h>

int main(){
    char ch;    
    printf("Enter character: ");
    scanf("%c", &ch);

    ((ch<=47 && ch>=0) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))?printf(""):printf("Not ");
    printf("Speical Symbol");
}