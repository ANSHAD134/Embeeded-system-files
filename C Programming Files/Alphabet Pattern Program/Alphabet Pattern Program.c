#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    printf("------Alphabet Pattern Program------\n");
    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= i; j++) {
            if(ch <= 'Z') {
            printf("%c ", ch++);
        }
    }
        printf("\n");
    }

    printf("------Number Pattern Program--------\n");
    int num = 1;
    for(i = 1; i <= 7; i++) {
    for(j = 1; j <= i; j++) {
        printf("%d ", num++);
    } 
    printf("\n");
}
return 0;
}