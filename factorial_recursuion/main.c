#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int fact(int);
void main()
{
    while(1)
{
    int n,result;
    char ch;
    label:
        {
 printf("\nenter a number ");
scanf("%d",&n);
result=fact(n);
printf("result =%d\n",result);

printf("\n\nDO YOU WANT TO CONTINUE OR NOT (y/n)");
scanf(" %c",&ch);
        }
if(ch=='y'||ch=='Y')
    goto label;
else
    exit(0);
}
}
int fact(int n)
{
    int factorial=1;
    if(n==0)
        return(1);
   factorial= n*fact(n-1);
    return(factorial);
}
