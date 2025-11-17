#include <stdio.h>

int main() {
    int n, i, limit;

    printf("Enter a number to print its Multiplication table: ");
    scanf("%d", &n);

    printf("Enter How many Multiples you want: ");
    scanf("%d", &limit);

    printf("Multiplication table of %d:\n", n);
    for(i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}