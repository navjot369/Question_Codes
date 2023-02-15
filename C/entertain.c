#include<stdio.h>

int entertian(int sal);

int main(){
    entertain(50000);
    entertain(150500);
    entertain(25000);
    entertain(78000);
    entertain(99900);
}

int entertain(int sal){
    int house_rent, medical, food, saving, social, entertain, total;
    house_rent = 0.2*sal;
    medical = 0.15*sal;
    food = 0.25*sal;
    saving = 0.1*sal;
    social = 0.05*sal;
    total = house_rent + medical + food + saving + social;
    entertain = sal - total;
    printf("\n\nFor salary : %d", sal);
    printf("\nAmount left for entertainment: %d", entertain);
    return 0;
}