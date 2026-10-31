#include <stdio.h>
int main()
{
    int n, original, temp, digit, count = 0;
    int sum = 0, power = 1;
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Not Armstrong");
        return 0;
    }
    original = n;
    temp = n;
    do
    {
        count++;
        temp = temp / 10;
    } while(temp > 0);
    temp = n;
    do
    {
        digit = temp % 10;
        power = 1;
        for(int i = 1; i <= count; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    } while(temp > 0);
    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}