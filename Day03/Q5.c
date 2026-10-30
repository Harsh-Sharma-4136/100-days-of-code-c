// Name: Harsh Sharma
// SAP ID: 590042651
// Day:03, Question: 5
// Date: 09-09-2026

//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter temprature in celcius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("Temprature in Fahrenheit is %.2f",f);
    return 0;
}