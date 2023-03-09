#include <stdio.h>

int main(){
    int day, mon;
    printf("Enter date(DD/MM): ");
    scanf("%d/%d", &day, &mon);

    if(mon==1){
        day<=19?printf("Capricon"):printf("Aquarius");
    } else if(mon==2){
        day<=17?printf("Aquarius"):printf("Pisces");
    } else if(mon==3){
        day<=19?printf("Pisces"):printf("Aries");
    } else if(mon==4){
        day<=19?printf("Aries"):printf("Taurus");
    } else if(mon==5){
        day<=20?printf("Taurus"):printf("Gemini");
    } else if(mon==6){
        day<=20?printf("Gemini"):printf("Cancer");
    } else if(mon==7){
        day<=22?printf("Cancer"):printf("Leo");
    } else if(mon==8){
        day<=22?printf("Leo"):printf("Virgo");
    } else if(mon==9){
        day<=22?printf("Virgo"):printf("Libra");
    } else if(mon==10){
        day<=22?printf("Libra"):printf("Scorpio");
    } else if(mon==11){
        day<=21?printf("Scorpio"):printf("Sagittarius");
    } else if(mon==12){
        day<=21?printf("Sagittarius"):printf("Capricon");
    } else {
        printf("Invalid Input!!");
    }
    return 0;
}