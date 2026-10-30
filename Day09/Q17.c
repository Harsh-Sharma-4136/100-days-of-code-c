// Name: Harsh Sharma
// SAP ID: 590042651
// Day:09, Question: 17
// Date: 11-09-2026

//Q17 — Find roots of a quadratic equation and categorize

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots are real and different: %.0f, %.0f", root1, root2);
    }
    else if (D == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %.0f", root1);
    }
    else {
        printf("Roots are complex");
    }

    return 0;
}

