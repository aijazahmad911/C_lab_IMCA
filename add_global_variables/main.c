#include <stdio.h>
#include <stdlib.h>
int x,y,n;
int main()
{
printf("enter two numbers \n");
scanf("%d%d",&x,&y);
add();
printf("\nsum is %d",n);
}

add()
{
    n=x+y;
}
