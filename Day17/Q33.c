#include<stdio.h>
#include<math.h>
int main()
{
    int digit,digits=0,arm=0,num,og;
    printf("Enter no.:");
    scanf("%d",&num);
    og=num;
    while(num!=0)
    {num=num/10;
    digits++;}
    while(num!=0)
    {
        digit=num%10;
        arm=num+pow(digit,digits);
        num=num/10;
    }
    if(arm==og)
    printf("Armstrong no.");
    else
    printf("NO");
    return 0;
}