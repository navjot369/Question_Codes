#include <stdio.h>

int main() {
    int item, price;
    printf("Enter the quantity: ");
    scanf("%d", &item);
    printf("Enter the price of each item: ");
    scanf("%d", &price);
    float dis = 0;
    if(item>1000){
        dis = 0.1*item*price;
    }
    float total = item*price - dis;
    printf("The total amount: %.2f", total);
    return 0;
}