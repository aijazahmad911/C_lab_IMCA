/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to print table of entered number and close the program when user wants
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
    char ch;
    int m,n,i=1;
printf("enter a number  :");
scanf("%d",&n);

while(i<=10)
{
    m=n*i;
    printf("%d * %d =%d\n",n,i,m);
i++;
}
aijaz:
printf("\n do you want to continue (Y/N)");
scanf(" %c",&ch);
if(ch=='N'||ch=='n')
    break;
    if(ch=='Y'||ch=='y')
        continue;
    else if(ch!='Y'||ch!='y')
        goto aijaz;
}
getch();
}
