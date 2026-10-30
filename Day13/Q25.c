// Name: Harsh Sharma
// SAP ID: 590042651
// Day:13, Question: 25
// Date: 16-09-2026

// Q25 — Basic calculator using switch-case

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter first number, operator, second number (e.g. 5 + 3): ");
    scanf("%f %c %f", &num1, &operation, &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result = %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("Result = %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

