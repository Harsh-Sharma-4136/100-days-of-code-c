// Name: Harsh Sharma
// SAP ID: 590042651
// Day:16, Question: 32
// Date: 16-09-2026

// Q32 — Check if a number is a palindrome

#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is Not a Palindrome\n", original);
    }

    return 0;
}