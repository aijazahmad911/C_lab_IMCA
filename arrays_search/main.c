#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,s;

   printf("enter size :");
   scanf("%d",&n);
   int a[n];
   printf("enter numbers :");
   for(i<0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("\nenter number to be searched :");
   scanf("%d",&s);
   for(i=0;i<n;i++)
   {
       if(s==a[i])
        printf("\n number found ");
       else
        printf("not found");
   }
}
