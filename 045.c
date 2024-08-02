//C PROGRAM TO PRINT THE DISCOUNT AND THE ACTUAL AMOUNT FROM THE GIVEN DETAILS.
#include <stdio.h>
main()
{
     float sales,dis,amt;

    printf("enter the sales amount :");
    scanf("%f",&sales);

    if (sales >= 25000)
    {
        dis=sales*25/100;
    }
    else
        if (sales<20000 && sales>25000)
    {
        dis=sales*20/100;
    }
    else
        if (sales<10000 && sales>20000)
    {
        dis=sales*10/100;
    }
    else
        if (sales<=5000 && sales>10000)
    {
        dis=sales*5/100;
    }
    else
    {
      dis=0;
    }
   amt=sales-dis;

    printf("\n Discount is %.2f",dis);
    printf("\n actual amount is %.2f",amt);
}
