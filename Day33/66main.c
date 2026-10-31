#include <stdio.h>

int main(void) {
    int a[101], n, x, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;
    n++;

    for (j = 0; j < n; j++)
        printf("%d ", a[j]);

    return 0;
}