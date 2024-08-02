\\C PROGRAM THAT READS TWO NUMBERS FROM THE USER AND PRINTS THEIR ABSOLUTE DIFFERENCE.\
#include <stdio.h>
main()
{
    int n1,n2,ad;
    n1=n2=ad=0;

    printf("enter the first number:");
    scanf("%d",&n1);

    printf("enter the secound number:");
    scanf("%d",&n2);

    if (n1>n2)
    {
       ad=n1-n2;
    }
    else
    {
        ad=n2-n1;
    }
    printf("absolute difference is %d",ad);
}


