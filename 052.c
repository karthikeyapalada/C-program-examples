// C PROGRAM TO ABC LTD COMPANY THAT TO GENERATE THE FINAL BILL OF A CUSTOMER ACCORDING TO THEIR POLICES.
#include <stdio.h>
main()
{  char mode[10];
    int amt, dis, bill, days;

    printf("Enter mode of payment (cash/credit): ");
    scanf("%s",&mode);

    printf("Enter amount of TV: ");
    scanf("%d", &amt);

    printf("Duration of payments (in days): ");
    scanf("%d", &days);

    if (strcmp(mode, "cash") == 0)
        {
        dis = amt * 25 / 100;
        bill = amt - dis;
        }
     else
        if (strcmp(mode, "credit") == 0 && days <= 7)
       {
        dis = amt * 15 / 100;
        bill = amt - dis;
        }
     else
        {
        dis = amt * 10 / 100;
        bill = amt + dis;
        }

}

