#include <stdio.h>

int main()
 {
    char user;
    printf("Enter the character: ");
    scanf("%c", &user);

    switch(user)
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':{
            printf("This is vowel");
            break;
        }
        default:{
            printf("This is consonant.");
            break;
        }
    }
}