\\ C program to read the bill amount and the amount paid by the customer,and then display the balance amount to be returned to the customer
#include <stdio.h>
main()
{ int bill,amt_paid,bal_amt;
  bill=amt_paid,bal_amt;

  printf("hey enter bill amount:-");
  scanf("%d",&bill);

  printf("hey enter amount paid by customer:-");
  scanf("%d",&amt_paid);

  bal_amt=amt_paid-bill;
  printf("balance amount to be returned is %d",bal_amt);
}
