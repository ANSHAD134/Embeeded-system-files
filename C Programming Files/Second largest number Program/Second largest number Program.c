#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int i, first, second;

    if(n<2) {
        printf("Invalid Input\n");
        return -1;
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
        if(arr[i]>second && arr[i]!=first) {
            second = arr[i]; 
    }
    }
    }
    return second;
}

int main() {
    int n, i;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    } 
    
    int second = findSecondLargest(arr, n);
    if(second != -1)
    printf("Second largest number is : %d\n", second);
    return 0;
    }