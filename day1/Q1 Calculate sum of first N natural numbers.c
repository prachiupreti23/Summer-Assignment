#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
    getch();
    return 0;
}