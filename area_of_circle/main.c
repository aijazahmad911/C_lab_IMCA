/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to claculate area of circle
#include <stdio.h>
#include <stdlib.h>

float PI = 3.14;
int main()
{
    int radius;
    printf("Input Radius of Circle: ");
    scanf("%d", &radius);

    printf("Area of circle is: %f", PI * radius * radius);
    getch();
}
