// Name: Harsh Sharma
// SAP ID: 590042651
// Day:04, Question: 8
// Date: 09-09-2026

//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum=%d", sum);

    return 0;
}
