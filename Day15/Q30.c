// Name: Harsh Sharma
// SAP ID: 590042651
// Day:15, Question: 30
// Date: 16-09-2026

// Q30 — Reverse a given number

#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}