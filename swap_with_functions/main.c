#include <stdio.h>
#include <stdlib.h>
int a,b;
int main()
{
    printf("enter first number :\n");
    scanf("%d",&a);
    printf("enter second number :\n");
    scanf("%d",&b);
    swap();
    printf("after swapping first number =%d\n",a);
    printf("after swapping second number=%d",b);

}
swap()
{
    //a=3,b=2
    a=a+b;    //3+2=5
    b=a-b;  //5-2=3
    a=a-b;
}
