/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to print numbers in ascending order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //local declaration
    int x,y,z;
    //input
    printf("ënter a number :");
    scanf("%d",&x);
    printf("ënter a number :");
    scanf("%d",&y);
    printf("ënter a number :");
    scanf("%d",&z);
    //processing
    if(x<y&&x<z)
    {
        if(y<z)
        {
            printf("\n\nascending order = %d\t%d\t%d",x,y,z);
        }
        else if(z<y)
            printf("\n ascending order =%d\t%d\t%d",x,z,y);
    }
    if(y<x&&y<z)
    {
        if(x<z)
        {
            printf("\n\n ascending order =%d\t%d\t%d",y,x,z);
        }
    }
    if(z<x&&z<y)
    {
        if(x<y)
        {
            printf("\n\nascending order =%d\t%d\t%d",z,x,y);

    }
    }
    if(x<y&&x<z)
    {

    }
    if(y<z&&y<x)
    {
        if(z<x)
            printf("ascending order =%d\t%d\t%d",y,z,x);
    }
    if(z<x&&z<y)
    {
        if(y<x)
            printf("ascenging order =%d\t%d\t%d",z,y,x);
    }
    getch();
}
