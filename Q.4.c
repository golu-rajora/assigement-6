//Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("sum of  squares first nature number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int y;
        y=i*i;
        sum=sum+y;

    }
    printf("%d  squares of first  nature number sum is = %d",x,sum);
    getch();
    return 0;

}
