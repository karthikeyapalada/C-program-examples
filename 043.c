 //C PROGRAM TO CALCULATE & PRINT THE ELECTRICITY BILL OF A CUSTOMER.
#include <stdio.h>
 main()
 {
    int customerID, units;
    char customerName[100];
    float bill, surcharge = 0;
    printf("Enter Customer ID: ");
    scanf("%d",&customerID);
    printf("Enter Customer Name: ");
    scanf("%s",&customerName);
    printf("Enter units consumed: ");
    scanf("%d",&units);

    if (units <= 0) {
        printf("the bill amount is 100 \-");
        }
    else   if (units <= 199)  {
        bill = units*1.20;
         }
    else if (units >=200  && units <=400 ) {
        bill = units*1.50;
       }
    else  if (units >= 400 && units <=600) {
        bill = units *1.80;
       }
    else
    {
      bill=units*2.00;
    }

    if (bill > 400)
        {
        surcharge = bill * 0.15;
        bill += surcharge;
       }

    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Surcharge: %.2f\n", surcharge);
    printf("Total Amount to be Paid: %.2f\n", bill);

}
