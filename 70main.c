#include <stdio.h>

int main(void) {
    int a[100], n, k, i, temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (n <= 0)
        return 0;

    k = k % n;

    while (k--) {
        temp = a[n - 1];

        for (i = n - 1; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}