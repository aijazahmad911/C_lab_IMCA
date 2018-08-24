//program to print 1-5 using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1;
function(n);
}
function(int n)
{
    if(n==6)
        exit(0);
    printf("%d\n",n);
    function(n+1);
}
