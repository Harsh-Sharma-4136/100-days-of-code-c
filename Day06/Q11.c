// Name: Harsh Sharma
// SAP ID: 590042651
// Day:06, Question: 11
// Date: 09-09-2026

//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);

    return 0;
}
