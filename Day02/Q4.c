// Name: Harsh Sharma
// SAP ID: 590042651
// Day:02, Question: 4
// Date: 09-09-2026

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main()
{
    int r;
    float p=3.14;
    float a,c;
    printf("Enter radius:");
    scanf("%d",&r);
    a=p*r*r;
    c=2*p*r;
    printf("Area is %.2f and Circumference is %.2f",a,c);
    return 0;
}