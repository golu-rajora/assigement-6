// Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int x,s=1;
    printf("find factorial of a number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=1;i<=x;x--)
    {
        s=s*x;
    }
    printf("factorial number is = %d",s);
    getch();
    return 0;

}
