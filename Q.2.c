//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("sum of first even nature number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=2;i<=x*2;i++)
    {
        sum=sum+i;
        i++;
    }
    printf("%d first even nature number sum is = %d",x,sum);
    getch();
    return 0;

}
