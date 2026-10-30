// Name: Harsh Sharma
// SAP ID: 590042651
// Day:16, Question: 31
// Date: 16-09-2026

//Q31 — Print binary representation of a number

#include <stdio.h>

int main() {
    int num, binary[64], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}


