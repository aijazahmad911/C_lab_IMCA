#include <stdio.h>
#include <stdlib.h>
void factorial(int);
int main()
{
int num=5;
//printf("enter a number :");
//scanf("%i",&n);
factorial(num);
}
void factorial(num)
{
int result;
if(num==1)
return(1);
result=factorial(num-1);
printf("result=%d",result);
}
