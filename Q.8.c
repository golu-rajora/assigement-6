//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int x,i;
    printf("find given number is prime or not :-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            if(x==i)
                i=0;
                break;
        }
    }
    if(i)
     printf(" %d is  not prime",x);
     else
        printf(" %d  is prime",x);
        getch();
     return 0;
}
