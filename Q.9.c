//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,y,z,i;
    printf("calculate LCM of two number:-\n");
    printf("enetr two number:-");
    scanf("%d %d",&a,&b);
     for(i=1;i<=a*b;i++)
     {
         if(i%a==0&&i%b==0)
             break;
     }
     printf("%d and %d number LCM is %d",a,b,i);
     return 0;
}
