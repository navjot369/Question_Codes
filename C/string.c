#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Navjot";
    char str2[20];
    char str3[20] = "Navjot";
    strcpy(str2, str1);
    printf("%s", str2);
    printf("%d", strcmp(str1, str2));
    printf("%d", strcmp(str1, str3));
}