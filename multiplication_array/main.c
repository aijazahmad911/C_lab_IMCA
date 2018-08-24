#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter elements of first array:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("enter elements of second array :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    multiply(a,b,c);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[3][3],int b[3][3],int c[3][3]){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = 0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
