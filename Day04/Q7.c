// Name: Harsh Sharma
// SAP ID: 590042651
// Day:04, Question: 7
// Date: 09-09-2026

//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}