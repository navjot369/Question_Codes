#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int num = (N/K)*(N/K);
    printf("%d", num);
    return 0;
}