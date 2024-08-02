//C PROGRAM TO READ  FLOOR NUMBER AND DISPLAY WHICH VIEW FLOOR HAS

#include <stdio.h>
 main()
 {
   int floor;

   printf("enter ur floor number :");
   scanf("%d",&floor);

   if (floor>50)
   {
       printf("we have only 50 floors");
   }
     else
        if (floor%2==0)
     {
      printf("hey! you have beach view for your flat");
     }
          else
            {
            printf("hey! you have forest view for your flat");
            }
 }
