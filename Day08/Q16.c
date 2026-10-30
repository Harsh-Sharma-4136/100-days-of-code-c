// Name: Harsh Sharma
// SAP ID: 590042651
// Day:08, Question: 16
// Date: 11-09-2026

//Q16 — Find the largest among three numbers
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest number is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number is %d\n", b);
    } else {
        printf("Largest number is %d\n", c);
    }

    return 0;
}