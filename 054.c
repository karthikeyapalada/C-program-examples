//C PROGRAM TO PREPARE ELECTRICITY BILL FROM FOLLOWING DATA.
#include <stdio.h>
main()
{   int unit;
    char type;
    float bill;

    printf("No of units consumed: ");
    scanf("%d", &unit);
    printf("Purpose of use (d for domestic / c for commercial): ");
    scanf(" %c", &type);

    if (type == 'd')
    {  if (unit < 100)
        {  bill = 100; 
        }
          else
              if (unit >= 100 && unit < 200)
                {   bill = unit * 1.50;
                }
                else
                    if (unit >= 200 && unit < 300)
                    {   bill = unit * 3.00;
                    }
                      else
                        {  bill = unit * 5.00;
                        }
      }
    else
         if (type == 'c')
      {  if (unit < 100)
        {  bill = 150;
        }
           else
                if (unit >= 100 && unit < 200)
                { bill = unit * 2.50;
                }
                  else
                      if (unit >= 200 && unit < 300)
                        {  bill = unit * 4.50;
                        }
                        else
                            {  bill = unit * 6.00;
                            }
       }
    else
    {
        printf("Invalid type of use.\n");
    }
     printf("Electricity bill is %.2f\n", bill);
}
