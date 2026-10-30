// Name: Harsh Sharma
// SAP ID: 590042651
// Day:14, Question: 28
// Date: 16-09-2026

// Q28 — Print product of even numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
        }
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}