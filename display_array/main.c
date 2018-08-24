#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int marks[]={34,56,78,23,12};
for(i=0;i<5;i++)
    disp(&marks[i]);

return 0;
}
void disp(int *n)
{
    show(&n);
}
void show(int* p)
{
    printf("%d\t",p);
}
