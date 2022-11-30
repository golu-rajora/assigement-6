// Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("sum of  cubes first nature number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int y;
        y=i*i*i;
        sum=sum+y;

    }
    printf("%d  cubes of first  nature number sum is = %d",x,sum);
    getch();
    return 0;

}

