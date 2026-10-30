#include <stdio.h>

int main(void) {
    int a[10][10], r, c, i, j, d, start, end;

    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (d = 0; d < r + c - 1; d++) {
        start = d < c ? 0 : d - c + 1;
        end = d < r ? d : r - 1;

        for (i = end; i >= start; i--) {
            j = d - i;
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}