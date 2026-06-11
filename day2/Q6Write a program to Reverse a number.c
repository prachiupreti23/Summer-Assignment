#include<stdio.h>
#include<conio.h>
int main()
{
    int num,reverse=0,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    printf("Reverse of number is %d",reverse);
    getch();
    return 0;
}