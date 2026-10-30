
#include <stdio.h>

int main() {
    int n, temp, first, last, power = 1;

    scanf("%d", &n);

    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;
    n = n % power;
    n = n / 10;

    printf("%d", last * power + n * 10 + first);

    return 0;
}