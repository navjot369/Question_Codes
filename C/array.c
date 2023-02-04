#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3};
    printf("%d", arr1[1]);

    char arr2[] = "Navjot Singh";
    printf("%c", arr2[2]);

    char str1[6];
    printf("\nEnter your first name: ");
    scanf("%s", &str1);

    printf("So, your good name is %s", str1);
    printf("\n %d", sizeof(str1));

    char str2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'N', '\0', 'a', 'v'};
    printf("%s", str2);

}