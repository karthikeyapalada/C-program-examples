#include <stdio.h>
main()
{
    int present,last,uc;
    float amt;
    present=last=uc=amt;

    printf("enter present month reading :");
    scanf("%d",&present);

    printf("enter last month reading  :");
    scanf("%d",&last);

    uc=present-last;
    amt=uc*7.85;
    printf("bill amount is  :%.4f",amt);
}
