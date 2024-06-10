#include <stdio.h>
main()
{
   float radius,area;
   radius=area=0;

  const float PI=3.14;

   printf("enter the radius of circle:");
   scanf("%f",&radius);

   area=PI*radius*radius;

   printf("area of cicle is: %.2f",area);
}
