#include <stdio.h>

int main() {
    int n, temp, digit, i, fact, sum = 0;

    scanf("%d", &n);
    temp = n;

    do {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;

    } while (temp > 0);

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}