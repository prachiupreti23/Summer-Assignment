#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("Sum of digits is %d",sum);
    getch();
    return 0;
}
