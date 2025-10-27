#include <stdio.h>
#include <math.h>

int main () {
long long Binary;
int decimal = 0, i = 0, remainder;

printf("Enter a Binary number:");
scanf("%lld", &Binary);

while(Binary != 0) {
    remainder = Binary % 10;
    decimal = decimal + remainder * pow(2, i);
    Binary = Binary / 10;
    i++;

}
    printf("Decimal Value = %d\n", decimal);

    return 0;
}