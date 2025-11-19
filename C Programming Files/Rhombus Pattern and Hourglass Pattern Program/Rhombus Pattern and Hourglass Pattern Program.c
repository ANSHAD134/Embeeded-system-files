#include <stdio.h>

int main() {
    int n, i ,j;

    printf("Enter number of rows for Rhombus: ");
    scanf("%d", &n);

    printf("----Rhombus Pattern----\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }    
        for(j = 1; j <= 2*i - 1; j++) {
        printf("*");
    }
    printf("\n");
}

    printf("Enter number of rows for Hourglass: ");
    scanf("%d", &n);

    printf("----Hourglass Pattern----\n");
    for(i = n; i >= 1 ; i--) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
        }

        for( i= 2; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf(" ");
            }
                for(j = 1; j <= 2*i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
        
        return 0;
}