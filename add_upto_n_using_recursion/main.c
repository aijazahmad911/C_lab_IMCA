/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// addition using recursion
#include <stdio.h>
#include <stdlib.h>
int fun(int);
int main()
{
    int n;
    printf("enter number upto which addition is to be done ");
    scanf("%d",&n);
    int sum=fun(n);
    printf("%d",sum);
    getch();
}
int fun(int n)
{
    int sum=0;
    if(n==0)
        return(0);
    sum=n+fun(n-1);
    return (sum);
}
