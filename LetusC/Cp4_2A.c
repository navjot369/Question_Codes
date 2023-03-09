#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    (ch>=97 && ch<=122)?printf("Lowercase"):printf("Not lowercase");
    return 0;
}