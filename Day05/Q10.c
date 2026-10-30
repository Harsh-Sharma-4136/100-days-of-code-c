// Name: Harsh Sharma
// SAP ID: 590042651
// Day:05, Question: 10
// Date: 09-09-2026

//Q10 — Convert seconds to hours:minutes:seconds

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
