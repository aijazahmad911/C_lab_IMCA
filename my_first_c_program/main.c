#include <stdio.h>
#include <stdlib.h>

int num, count = 0, sum = 0;
int main()
{
    printf("Input number: ");
    scanf("%d",&num);
    /*while(count<num){
        count += 1;
        sum = sum + count;
    }*/
    //sum = sumform(num);
    sum = sumrec(num);
    printf("Sum: %d",sum);
    printf("\nFactorial: %d", factorial(num));
    return 0;
}


int sumrec(num){
    if(num == 1){
      return num;
    }
    else{
        return num + sumrec(num - 1);
    }
}

int sumform(num){
    return num * ((num + 1) / 2);
}
int factorial(num){
    if(num == 1){
      return num;
    }
    else{
        return num * factorial(num - 1);
    }
}

