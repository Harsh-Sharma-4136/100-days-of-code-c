#include <stdio.h>

int main(void) {
    int i, j;
    int groups[] = {1, 3, 5, 3, 1};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < groups[i]; j++)
            printf("*\n");

        if (i < 4)
            printf("\n");
    }

    return 0;
}