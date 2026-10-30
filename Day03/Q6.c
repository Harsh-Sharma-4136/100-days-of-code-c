// Name: Harsh Sharma
// SAP ID: 590042651
// Day:03, Question: 5
// Date: 09-09-2026

//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers are %d %d",a,b);
    return 0;
}