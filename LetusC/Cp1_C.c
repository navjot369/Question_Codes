#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    printf("Enter marks for each subject: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int total = n1 + n2 + n3 + n4 + n5;
    float percent = total/5;
    printf("Total marks : %d/500\nPerentage: %.2f ", total, percent);
}