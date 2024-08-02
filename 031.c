//C PROGRAM TO FIND BIGGEST OF 4 NUMBERS
#include <stdio.h>
main()
{ int n1,n2,n3,n4;
  n1=n2=n3=n4=0;

  printf("enter the first number:");
  scanf("%d",&n1);

  printf("enter the secound number:");
  scanf("%d",&n2);

  printf("enter the third number:");
  scanf("%d",&n3);

  printf("enter the fourth number:");
  scanf("%d",&n4);

  if (n1>n2 && n1>n3 && n1>n4)
    printf("%d is biggest ",n1);
  else
      if (n2>n1 && n2>n3 && n2>n4)
      printf("%d is biggest",n2);
        else
           if (n3>n1 && n3>n2 && n3>n4)
            printf("%d is biggest",n3);
            else
            printf("%d is biggest",n4);
}
