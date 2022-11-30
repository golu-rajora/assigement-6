//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("sum of first nature number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("%d first nature number sum is = %d",x,sum);
    getch();
    return 0;

}
