// Name: Harsh Sharma
// SAP ID: 590042651
// Day:14, Question: 27
// Date: 16-09-2026

// Q27 — Print sum of first n odd numbers

#include <stdio.h>

int main() {
    int n, i, num = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + num;
        num = num + 2;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}


