#include <stdio.h>

int a, b;
int num;

// Function declarations (prototypes)
int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(float, float);

int main()
{
    printf("\n\nConditional Calculator\n");

    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nConditional Calculator Menu\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    printf("\n\nChoose your operation: ");
    scanf("%d", &num);

    printf("\nCalculation Result\n");

    if(num == 1)
    {
        printf("Sum of the numbers: %d\n", sum(a, b));
    }
    else if(num == 2)
    {
        printf("Difference of the numbers: %d\n", sub(a, b));
    }
    else if(num == 3)
    {
        printf("Product of the numbers: %d\n", mul(a, b));
    }
    else if(num == 4)
    {
        if (b != 0)
            printf("Division of the numbers: %.2f\n", div(a, b));
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else if(num == 5)
    {
        printf("Exiting the calculator.\n");
    }
    else
    {
        printf("Invalid Number.\n");
    }

    return 0;
}

// Function definitions (outside main)
int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}
