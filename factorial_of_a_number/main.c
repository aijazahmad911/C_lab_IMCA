/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// factorial of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    fact();
   getch();
}
fact()
{
    int n,m=1;
    printf("enter a number");
    scanf("%d",&n);
    if(n>=0){
    while(n>0)
    {
        m=n*m;
        n--;
    }
printf("Factorial = %d\n",m);
    }
    else
        printf("\nfactorial of negative number does not exist");
    }
