#include <stdio.h>
int main() {
    int n, i;
    long long int fact = 1;

    printf("Enter the number: \n");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of Negative numbers is not defined. \n");
    } 
    else {
        for (i=1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %lld \n", n, fact);
    }
    return 0;
    }