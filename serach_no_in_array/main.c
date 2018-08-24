/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to search a number in an array
#include <stdio.h>
#include <stdlib.h>
void fun(int);
int main()
{

    int result,i,s,a[5];
    printf("enter five numbers :");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter no. to be searched :");
    scanf("%d",&s);
    result = search(a, s);
    if(result != -1)
        printf("Number found at position %d", result+1);
    else
        printf("Not Found");
        getch();
}
int search(int* a, int s){
    int i;
    for(i=0;i<5;i++)
    {
        if(s==a[i])
            return i;
    }
    return -1;
}

