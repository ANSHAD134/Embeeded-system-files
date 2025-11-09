#include <stdio.h>

int main() {
    int r, i, j, num=1;

    printf("Enter number of rows for Floyd's Triangle: ");
    if (scanf("%d", &r) != 1 || r <= 0) {
        printf("Enter a valid positive integer.\n");
        return 1;
    }

    for(i = 1; i <= r; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}