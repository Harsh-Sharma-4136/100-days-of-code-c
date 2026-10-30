// Name: Harsh Sharma
// SAP ID: 590042651
// Day:08, Question: 15
// Date: 11-09-2026

//Q15 — Check uppercase, lowercase, digit, or special character

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
