\\C PROGRAM TO READ COST PRICE AND SELLING PRICE FROM THE USER AND CALULATE PROFIT LOSS OR NO LOSS NO PROFIT .
#include <stdio.h>
main()
{ int cp,sp,amt;
   cp=sp=amt=0;

   printf("enter cost price:");
   scanf("%d",&cp);
  printf("enter selling price:");
   scanf("%d",&sp);

   if (cp<sp)
   {
     amt=sp-cp;
     printf("heyy,you made a profit of rs.%d/-",amt);
   }
   else
       if (cp>sp)
   {
       amt=cp-sp;
       printf("oops!,you incurred a loss of Rs.%d/-",amt);
   }
         else
            printf("hmm...! no loss.....no profit.....");
}
