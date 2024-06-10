#include <stdio.h>
main()
{
  int a,b,result;
  a=b=result;

  printf("enter the value of a:");
  scanf("%d",&a);

  printf("enter the value of b:");
  scanf("%d",&b);

  result=(a+b)*(a+b);

  printf("the result (a+b)*(a+b) is %d",result);
}
