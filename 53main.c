#include <stdio.h>

int main(void) {
    int i, j, spaces;

    for (i = 1; i <= 5; i++) {
        for (spaces = 1; spaces <= 5 - i; spaces++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        for (spaces = 1; spaces <= 5 - i; spaces++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}