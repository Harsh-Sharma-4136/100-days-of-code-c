#include <stdio.h>

int main(void) {
    int a[10][10], n, i, j, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Diagonal sum = %d", sum);

    return 0;
}