#include <stdio.h>

int main() {
    float selling, cost;
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter selling price: ");
    scanf("%f", &selling);

    if(selling>cost){
        float profit = selling - cost;
        printf("Profit: %.2f", profit);
    } else {
        float loss = cost - selling;
        printf("Loss: %.2f", loss);
    }
    return 0;
}