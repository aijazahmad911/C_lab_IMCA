/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to add two numbers using pointers*/
#include<stdio.h>
#include<conio.h>
main()
{
    // local declaration section
    int x,y,z;
    // input section
    printf("ënter a number :");
    scanf("%d",&x);
    printf("\n\nënter a second number :");
    scanf("%d",&y);
    add(&x,&y,&z);
    printf(" \n\n sum is %d",z);// FUNCTION CALL
}
add(int*x,int*y,int*z)//function definition
{
*z=*x+*y;
}
