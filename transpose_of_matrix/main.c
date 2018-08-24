/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to find transpose of a matrix
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
    int a[3][3];
    printf("enter elements of a matrix :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nmatrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
    printf("\n");
    }
    fun(a);
    printf("transpose of matrix is\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
        }
 getch();

}
fun(int a[3][3])
{
    int i,j;
int b[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=b[i][j];
        }
    }
}


