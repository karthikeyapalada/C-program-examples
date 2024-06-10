#include <stdio.h>
main()
{
    char a,b;
    a=b=0;

    printf("enter the capital letter :");
    scanf("%c",&a);

    b=a+32;

    printf("lower cas form of %c is %c",a,b);
}
