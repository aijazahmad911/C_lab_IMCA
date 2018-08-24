/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to check pass or fail
#include <stdio.h>
#include <stdlib.h>

main()
{
    int sub1,sub2,sub3,sub4;
    printf("enter marks in 4 subjects");
    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);
    if(sub1>=50&&sub2>=50&&sub3>=50&&sub4>=50)
        printf("pass");
      else
        printf("fail");
    getch();
}
