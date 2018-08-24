/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// fibonacci series
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1=0,n2=1,i=2,c,a;
printf("enter no. of elements : ");
scanf("\n%d",&a);
printf("\n%d\n%d",n1,n2);
while(i<=a)
{

    c=n1+n2;
    printf("\n%d",c);
    n1=n2;
    n2=c;
    i++;
}
getch();
}
