// C PROGRAM TO READ THE AGE OF A CANDIDATE AND DETERMINE WHETHER HE/SHE IS ELIGIBLE TO CAST HIS/HER VOTE.
#include <stdio.h>
main()
{ int age=0;

  printf("ENTER YOUR AGE : ");
  scanf("%d",&age);

  if (age>=18)
  {printf ("CONGRATIONS! YOU ARE ELIGIBLE FOR CASTING YOUR VOTE.");
  }
  else
  printf("OPPS!YOU ARE TOO YOUNG TO VOTE ");
}
