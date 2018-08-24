#include <stdio.h>
#include <stdlib.h>


int main()
{
    // Local Decleration
    int num1, num2, num3;
    // Input Section
    printf("Input Number 1: ");
    scanf("%d", &num1);
    printf("Input Number 2: ");
    scanf("%d", &num2);
    printf("Input Number 3: ");
    scanf("%d", &num3);
    // Processing & Output
    if(num1>=num2 && num1>=num3){
        printf("Number 1 is greatest");
    }
    else if(num2>=num1 && num2>=num3){
        printf("Number 2 is greatest");
    }
    else {
        printf("Number 3 is greatest");
    }

/*    printf("Greatest No. Is: %d\n", greater(greater(num1,num2),num3));
    printf("Smallest No. Is: %d", smallest(smallest(num1,num2),num3));
*/
}

int greater(num1,num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
int smallest(num1,num2){
    if(num1<num2){
        return num1;
    }
    else{
        return num2;
    }
}
