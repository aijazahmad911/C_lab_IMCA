#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Local Decleration
    int num1, num2;
    //Input Section
    printf("Input Number 1: ");
    scanf("%d", &num1);
    printf("Input Number 2: ");
    scanf("%d", &num2);
    //Processing & Output
    if(num1>num2){
        printf("Number 1: %d is greater", num1);
    }
    else if(num2>num1){
        printf("Number 2: %d is greater", num2);
    }
    else{
        printf("Both numbers are equal");
    }
}
