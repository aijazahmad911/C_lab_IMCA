/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//compare two numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter a number a :");
    scanf("%d",&a);
    printf("enter a number b : ");
    scanf("%d",&b);
    if(a==b)
        printf("numbers are same");
        else if(a>b)
        printf("a is greater");

        else
        printf("b is greater");
        getch();

}
