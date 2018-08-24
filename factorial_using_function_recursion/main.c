/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to find factorial of a number using recursion*/
#include <stdio.h>
#include <stdlib.h>
int factorial(int); // function call
int main()
{
//local declaration section
int n,f;
// input section
printf("enter a number :");
scanf("%d",&n);
if(n==0)

    printf("factorial is 1");
//function call
else{
f=factorial(n);
// result
printf("factorial of %d is %d",n,f);
}
getch();
}
// function  definition
int factorial(int n)
{
    int f=1;

        if(n==0)
   return 1;
    f=n*factorial(n-1);
    return(f);
}
