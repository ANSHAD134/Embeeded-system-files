#include <stdio.h>

int main() {
    int n, i, isprime;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        isprime = 0;
    } else {
        isprime = 1;

        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isprime = 0;
                break;
            }

        }
    }
    if(isprime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }
    return 0;
    }