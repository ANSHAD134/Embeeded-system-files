#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows for Hollow Full Pyramid: ");
    scanf("%d", &n);

    printf("-------Hollow Full Pyramid-------\n");
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
    

    for(j = 1; j <= (2 * i - 1) ; j++) {
        if(j == 1 || j == (2 * i - 1) || i == n) 
            printf("*");
         else 
            printf(" ");
        }
        printf("\n");
    }

    printf("Enter number of rows for Hollow Inverted Full Pyramid: ");
    scanf("%d", &n);

    printf("-------Hollow Inverted Full Pyramid-------\n");
    for(i = n; i >= 1; i--) {
        for(j = i; j < n; j++) {
            printf(" ");
        }

    for(j = 1; j <= (2 * i - 1); j++) {
        if(j == 1 || j == (2 * i - 1) || i == n)
            printf("*");
        else
            printf(" ");
    }

        printf("\n");
    }
    return 0;
}