#include <stdio.h>
int main()
{
    int a, b, x, y, temp, gcd;
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    if(x < 0)
        x = -x;
    if(y < 0)
        y = -y;
    a = x;
    b = y;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    if(x == 0 || y == 0)
        printf("0");
    else
        printf("%d", (x / gcd) * y);
    return 0;
}