/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to check whether entered no. is armstrong or not
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int isArmstrong(int);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(isArmstrong(n))
        printf("given no. is armstrong");
    else
        printf("not armstrong");
        getch();
}

int length(int n){
    int count = 0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int isArmstrong(int n){
    int i, a, r=0, org, count;
    org = n;
    count = length(n);
    for(i=0;i<count;i++)
        {
            a=n%10;
            r=r + powi(a,count);
            n=n/10;
        }
    return (org==r) ? 1:0;
}

int powi(int base, int power){
    int i, p = 1;
    for(i=0; i<power; i++){
        p = p*base;
    }
    return p;
}
