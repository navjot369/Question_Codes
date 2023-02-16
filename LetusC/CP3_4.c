#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int numleap = (year-2000-1)/4;
    int days = (year-2000) + numleap;
    int weekdays = days%7;
    switch(weekdays){
        case 0:{
            printf("Sunday");
            break;
        }
        case 1:{
            printf("Monday");
            break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wednesday");
            break;
        }
        case 4:{
            printf("Thursday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Saturday");
            break;
        }
    }
    return 0;
}