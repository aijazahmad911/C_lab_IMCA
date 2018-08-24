/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// swap through pointers
#include <stdio.h>
#include <stdlib.h>
main()
{
    // local declaration
 int x,y;
 //input section
 printf("enter a number  :");
 scanf("%d",&x);
printf("\n\nenter second number  :");
 scanf("%d",&y);
swap(&x,&y);//fuction call
//result
printf("\n\nafter swapping first no. =%d",x);
printf("\n\nafter swapping second no. =%d",y);
getch();
}
swap(int* x,int* y ) //function definition
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

