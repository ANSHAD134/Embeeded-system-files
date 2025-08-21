#include <stdio.h>
int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int i;
    {
        for (i=0; i < 10; i++) {
            printf("value of arr[%d]: %d \n", i, arr[i]);
            printf("address of arr[%d]: %p\n", i, &arr[i]);
        }

}
return 0;
}