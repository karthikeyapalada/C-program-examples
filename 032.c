//C PROGRAM TO CHECK IF A GIVEN IS DIVISIBLE BY BOTH three and five.
#include<stdio.h>
main()
 { int number;
   printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) 
        {
        printf("%d is divisible by both 3 and 5.\n", number);
        }
    else
     {
        printf("%d is not divisible by both 3 and 5.\n", number);
     }
}
