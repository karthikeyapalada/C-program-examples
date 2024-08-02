//C PROGRAM TO CALCULATE THE DISCOUNT AND FINAL AMOUNT BASED ON GIVEN DATA
#include <stdio.h>
main()
{  int sales,dis,bill;
  sales=dis=bill=0;
  printf("enter the sales amount:");
  scanf("%d",&sales);
  if (sales>=25000)
  {
      dis=sales*10/100;
  }
  else
  { dis=sales*5/100;
 }
  bill=sales-dis;

  printf("discount is : %d",dis);
  printf("\nbill amount is %d",bill);
}
