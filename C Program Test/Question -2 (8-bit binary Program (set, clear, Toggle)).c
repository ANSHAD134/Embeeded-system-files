#include <Stdio.h>

unsigned char modifyregister(unsigned char reg) 
{
    reg |= (1 << 2);
    reg &= ~(1 << 5);
    reg ^= (1 << 0);
    return reg;
}

void printbinary(unsigned char n)
{
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
}

int main() 
{
    unsigned char reg = 0b00101101; // Example initial value
    unsigned char result = modifyregister(reg);

    printf("Original: ");
    printbinary(reg);
    printf("\nModified: ");
    printbinary(result);
    printf("\n");

    return 0;
}