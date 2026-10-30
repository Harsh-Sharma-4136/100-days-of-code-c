#include <stdio.h>

int main(void) {
    int a[10][10], n, i, j, symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i])
                symmetric = 0;

    if (symmetric)
        printf("Symmetric matrix");
    else
        printf("Not symmetric");

    return 0;
}