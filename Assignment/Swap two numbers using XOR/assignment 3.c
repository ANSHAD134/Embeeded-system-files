#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: \n");
    scanf("%d", &a);
    printf("Enter another number: \n");
    scanf("%d", &b);
    
    if (a == b) {
        printf("Both numbers are same");
    } else {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        printf("Swapped numbers: %d %d", a, b);
    }
        return 0;
}