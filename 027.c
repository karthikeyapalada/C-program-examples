//C PROGRAM TO READ PRICE OF SAMSUNG MOBILE & VIVO MOBILE AND DISPLAY WHICH IS COSTILER ,IF BOTH THE MOBILES ARE SAME PRICES THEN DISPLAY “BOTH ARE AT SAME PRICE.

#include <stdio.h>
main()
{ int p1,p2;
  printf("enter the price of samsung mobile:");
  scanf("%d",&p1);
  printf("enter the price of vivo mobile:");
  scanf("%d",&p2);
  if (p1>p2)
    printf("samsung mobile is costly");
  else
      if(p2>p1)
      printf("vivo mobile is costly");
        else
         printf ("both are same price");
}
