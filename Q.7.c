//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int x,y=0;
    printf("find count digit:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(int i=0;x>0;i++)
    {
        y=y+1;
        x=x/10;
    }
    printf("count digit is = %d",y);
    getch();
    return 0;
}
