\\ C program to read 3 characters from the display them in reverse
#include <stdio.h>
main()
{
    char a,b,c;
    printf("enter 3 characters of your choice:- ");
    scanf("%c%c%c",&a,&b,&c);

    printf("the reverse order of %c%c%c is %c%c%c",a,b,c,c,b,a);
}
