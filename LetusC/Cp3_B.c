#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int num = a, pro = 0;    
    for(int i=1; i<=b; i++){
        pro += num;
    }
    printf("Product = %d", pro);
    return 0;
}

