// Name: Harsh Sharma
// SAP ID: 590042651
// Day:12, Question: 23
// Date: 16-09-2026

// Q23 — Calculate library fine based on late days

#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        fine = 0;
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
    } else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine = %.2f\n", fine);

    return 0;
}

