#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, more, choice;
    int *ptr, *New_ptr;

    printf("Enter the number of element: \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr==NULL) {
        printf("Memory allocation failed: \n");
        return 1;
    }    
    for(i=0; i<n; i++) {
        printf("Enter the element %d: \n", i+1);
        scanf("%d", (ptr+i));
    } 
        printf("How many more elements do you want to add? \n");
        scanf("%c", &choice);
        if (choice == 'y') {}
    
    if (more>0) {
    New_ptr = (int *)realloc(ptr, (n + more) * sizeof(int));
    if(New_ptr==NULL) {
        printf("Reallocation failed: \n");
        free(ptr);
        return 2;
    }

    ptr = New_ptr;
    for(i=n; i < n + more; i++) {
        printf("Enter the element %d: \n", i+1);
        scanf("%d", (ptr+i));
    }
    n = n + more;}

    printf("The elements are: \n");
    for(i=0; i<n; i++) {
        printf("%d\n", *(ptr+i));
    }
    free(ptr);
    return 0; 
}