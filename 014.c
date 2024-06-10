#include <stdio.h>
main()
{
    int rupees,paise;
    rupees=paise=0;

    printf("enter no of rupees:-");
    scanf("%d",&rupees);

    paise=rupees*100;

    printf("no of rupees %d in paises is %d",rupees,paise);
}
