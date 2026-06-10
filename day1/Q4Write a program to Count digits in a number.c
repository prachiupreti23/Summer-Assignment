#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("Number of digits is %d",count);
    return 0;
}
