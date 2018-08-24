#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,sum=0,a[5];
    float avg;
    printf("enter five numbers :");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
printf("sum is %d",sum);
avg=sum/5.0;
printf("average is %f",avg);
}

