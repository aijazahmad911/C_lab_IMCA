/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program of escaping two numbers in a loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    printf("enter last number :");
    scanf("%d",&n);
    {
    while(i<n)
    {
           i=i+2;

    if(i==10||i==20)
    continue;
    printf("\n %d",i);

    }

}
getch();
}
