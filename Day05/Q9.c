// Name: Harsh Sharma
// SAP ID: 590042651
// Day:05, Question: 9
// Date: 09-09-2026

//Q9 — Simple and Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    ci = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
