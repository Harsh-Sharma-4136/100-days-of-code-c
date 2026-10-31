#include <stdio.h>

int main(void) {
    int a[100], n, key, i, first = -1, last = -1;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d", first, last);

    return 0;
}