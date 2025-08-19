#include<stdio.h>
struct Book {
    char title [50];
    char author[30];
    float price;
};
int main()
{
    int i;
    struct Book B[3];
    for(i=0;i<3;i++)
    {
        printf("Enter the Title: \n");
        scanf(" %[^\n]", B[i].title);
        printf("Enter the author: \n");
        scanf(" %[^\n]", B[i].author);
        printf("Enter the price: \n");
        scanf(" %f", &B[i].price);

    }
    for(i=0;i<3;i++){
    printf("\nBook %d:\n Title: %s\n Author: %s\n Price: %.2f\n", i+1, B[i].title, B[i].author, B[i].price);
    }
    return 0;
}
