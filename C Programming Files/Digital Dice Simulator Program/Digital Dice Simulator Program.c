#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printDice (int num) {
    switch (num) {
        case 1:
            printf("\n------\n");
            printf("|     |\n");
            printf("|  *  |\n");
            printf("|     |\n");
            printf("------\n");
            break;
        case 2:
            printf("\n------\n");
            printf("|*    |\n");
            printf("|     |\n");
            printf("|    *|\n");
            printf("------\n");
            break;
        case 3:
            printf("\n------\n");
            printf("|*    |\n");
            printf("|  *  |\n");
            printf("|    *|\n");
            printf("------\n");
            break;
        case 4:
            printf("\n------\n");
            printf("|*   *|\n");
            printf("|     |\n");
            printf("|*   *|\n");
            printf("------\n");
            break;
        case 5:
            printf("\n------\n");
            printf("|*   *|\n");
            printf("|  *  |\n");
            printf("|*   *|\n");
            printf("------\n");
            break;
        case 6:
            printf("\n------\n");
            printf("|*   *|\n");
            printf("|*   *|\n");
            printf("|*   *|\n");
            printf("------\n");
            break;                
    }
}

int main() {
    int num;
    char ch;

    srand(time(0)); //seed Random Number Generator

    printf("Welcome to the Digital Dice Simulator!\n");
    printf("Press Enter to Roll the Dice or 'q' to Quit.\n");

    while (1) {
        ch = getchar();
        if (ch == 'q' || ch == 'Q') 
        break;
    if (ch == '\n') {
        num = (rand() % 6) + 1; //Generate Random Number between 1-6
        printDice(num);
        printf("You Rolled: %d\n", num);
        printf("Press Enter to Roll Again or 'q' to Quit.\n");
    }
 }

    printf("Thanks for Playing!\n");
    return 0;
}