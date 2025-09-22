#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(space = 1; space <=n-1; space++) {
            printf(" ");
    for(j=1; j<=i; j++) 
        printf("* ");
        printf("\n");
    }
    return 0;
    } 
} 
      