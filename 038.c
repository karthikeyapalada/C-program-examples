\\ C PROGRAM TO READ TEMP IN CENTIGRADE AND DISPLAYS A SUITABLES MSG

#include <stdio.h>
 main()
 {
    int temp;
    printf("Enter the temperature in Centigrade: ");
    scanf("%d", &temp);

    if (temp < 0)
        {
        printf("It's freezing cold!\n");
    }
    else
        if (temp >= 0 && temp < 10)
        {
        printf("It's very cold!\n");
    }
          else
              if (temp >= 10 && temp < 20)
            {
                printf("It's cold.\n");
             }
                else
                    if (temp >= 20 && temp < 30)
                    {
                        printf("It's normal wheather.\n");
                    }
                       else
                           if (temp >= 30 && temp < 40)
                            {
                                printf("It's hot.\n");
                            }
                                else
                                    {
                                    printf("It's very hot!\n");
                                    }
    }
