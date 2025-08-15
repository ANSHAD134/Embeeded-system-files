#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(float, float);

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n\n calculation outputs\n");
    printf("sum of the numbers: %d\n", sum(a, b));
    printf("Difference of the two numbers: %d\n", sub(a, b));
    printf("Product of the two numbers: %d\n:", mul(a, b));
    printf("Division result: %.2f\n\n\n", div(a, b));

    return 0;
}

int sum(int a, int b){
    int sum= a+b;
    return sum;

}
int sub(int a, int b){
    int sub= 0;
    sub=a-b;
    return sub;
}
int mul(int a, int b){
    int mul=0;
    mul= a*b;
    return mul;
}
float div (float a, float b){
    float div=0;
    div=a/b;
    return div;
}
