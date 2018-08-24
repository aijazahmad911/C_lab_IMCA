/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// sum of array elements
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],sum=0;
    printf("enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=9;i++)
    {
    sum=sum+a[i];
    }
        printf("sum is %d\n\n",sum);
        getch();
}
