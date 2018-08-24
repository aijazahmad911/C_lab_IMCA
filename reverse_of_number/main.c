#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int p_value(int);
int reverse(int,int);
int main()
{
int x,y,rev,l;
printf("enter a number :");
scanf("%d",&x);
l=p_value(x);
rev=reverse(x,l);
printf("reverse =%d",rev);
}
int p_value(int x)
{
    int value=1;
    while(x>9)
    {
      x=x/10;
      value*=10;
    }
    return (value);
}
int reverse(int x,int l)
{
    int a=0;
    while(x!=0)
    {
       a+=(x%10)*l;
       l/=10;
       x/=10;
    }
    return(a);
}
