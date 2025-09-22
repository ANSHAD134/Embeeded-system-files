#include <stdio.h>

int main() {
    int n, i, first, second;

    int arr[n];

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    
    if(arr[0]>arr[1]) {
        first = arr[0];
        second = arr[1];
    }
    else {
        first = arr[1];
        second = arr[0];
    }
    for(i=2;i<n;i++) {
        if(arr[i]>first) {
            second = first;
            first = arr[i];
        }
        else {
        if(arr[i]>second && arr[i]!=first);
            second = arr[i]; 
    }
    }
            printf("Second largest number is : %d", second);
    return 0;
    }