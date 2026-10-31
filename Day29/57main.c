#include <stdio.h>

int main(void) {
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}