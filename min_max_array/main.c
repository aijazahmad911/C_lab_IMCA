#include <stdio.h>
#include <stdlib.h>

int main()
{int a[5],i,result,result2;
printf("enter elements :");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
result=min(a,5);
printf("min element is %d",result);
result2=max(a,5);
printf("max element is %d",result2);

}
int min(int* a,int size){
int min=0,i;
min=a[0];
for(i=1;i<size;i++){
    if(a[i]<min)
        min=a[i];
}
    return(min);
}
int max(int* a,int size){
int max=0,i;
max=a[0];
for(i=1;i<size;i++){
    if(a[i]>max)
        max=a[i];
}
    return(max);
}
