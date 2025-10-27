#include <stdio.h>

int main() {
    int long long num, Binary[64], i = 0, j;

    printf("Enter a Decimal Number: ");
    scanf("%d", &num);

    while (num > 0) {
        Binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary Number: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", Binary[j]);
    }
    printf("\n");
    
    return 0;

}