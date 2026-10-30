// Name: Harsh Sharma
// SAP ID: 590042651
// Day:10, Question: 19
// Date: 11-09-2026

// Q19 — Classify a triangle (Equilateral, Isosceles, Scalene)

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    return 0;
}
