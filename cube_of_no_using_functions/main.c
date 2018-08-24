/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/* program to find cube of a no. using functions*/
#include <stdio.h>
#include <stdlib.h>
int cube(int*); //function declaration
main()
{
    //local declaration section
    int n;
    //input section
    printf("enter a no.  :");
    scanf("%d",&n);
    cube(&n); //function call
    // output
    printf("cube is %d",n);
    getch();
}

int cube(int* x) // function definition
{
*x=(*x)*(*x)*(*x);
}
