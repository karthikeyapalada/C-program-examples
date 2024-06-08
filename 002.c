\\ C  program to read price of iphone & cover case and calculate total bill

#include <stdio.h>
main()
{ int iphone,cover,total_bill;
  iphone=cover=total_bill=0;

  printf("enter the amount of iphone:-");
  scanf("%d",&iphone);

  printf("enter the amount of cover:-");
  scanf("%d",&cover);

  total_bill=iphone+cover;
  printf("total bill amount is:--%d",total_bill);
}
