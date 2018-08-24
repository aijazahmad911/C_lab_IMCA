/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// calculate simple interest
#include <stdio.h>
#include<stdlib.h>

int main()
{
   float P,R,T,Intrest;
   printf("Enter the Principle amount: \t");
   scanf("%f",&P);
   printf("Rate:\t");
   scanf("%f",&R);
   printf("Time:\t");
   scanf("%f",&T);
   Intrest=P*R*T/100;
   printf("simple interest=%f",Intrest);
   getch();
}
