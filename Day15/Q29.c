// Name: Harsh Sharma
// SAP ID: 590042651
// Day:15, Question: 29
// Date: 16-09-2026

// Q29 — Calculate factorial of a number

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}


