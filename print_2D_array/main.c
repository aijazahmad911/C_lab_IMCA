/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// print 2-d array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    int a[2][4]={{1,2,3,4},{5,6,7,8}};
    for(r=0;r<2;r++)
    {
        for(c=0;c<4;c++){
            printf("%d ",a[r][c]);
                }
            printf("\n");
    }

   getch();
}
