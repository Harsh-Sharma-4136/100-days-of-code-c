// Name: Harsh Sharma
// SAP ID: 590042651
// Day:07, Question: 13
// Date: 11-09-2026

//Q13 — Check leap year

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year\n", year);
            } else {
                printf("%d is Not a Leap Year\n", year);
            }
        } else {
            printf("%d is a Leap Year\n", year);
        }
    } else {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}

