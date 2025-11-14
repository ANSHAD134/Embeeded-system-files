#include<stdio.h>
#include<stdlib.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows and colums: ");
    scanf("%d %d", &m, &n);

    int *a = (int *)malloc(m * n * sizeof(int));
    int *b = (int *)malloc(m * n * sizeof(int));
    int *sum = (int *)malloc(m * n * sizeof(int));

    if(a == NULL || b == NULL || sum == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", (a + i*n + j));
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", (b + i*n + j));
        }
    }

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            *(sum + i*n + j) = *(a + i*n + j) + *(b + i*n + j);
        }
    }

    printf("Resultant matrix after addition:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t", *(sum + i*n + j));
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(sum);

    return 0;
}