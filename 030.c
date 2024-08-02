//C PROGRAM TO CHECK GIVEN NUMBER IS POSTIVE OR NEGATIVE.
#include <stdio.h>
main()
{ int no;

  printf("enter a number:");
  scanf("%d",&no);

  if (no>0)
  printf("the number is postive ");

  else
     if(no<0)
       printf("the number is negtive");
     else
        printf("the number is neutral");
}

