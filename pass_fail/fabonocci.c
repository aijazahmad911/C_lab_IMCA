
#include<stdio.h>
#include<stdlib.h>
main()
{

    int i,n,result;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        result=result+i;
        printf("%d",result);
    }

  return;
}
