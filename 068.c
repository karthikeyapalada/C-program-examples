//c program given as three integers representing a data as day ,month , year ,print the number day ,month, and year for the next date.
#include <stdio.h>
main()
{
 int dd , mm , yy;
 dd = mm = yy = 0;
 printf("Enter The DOB : ");
 scanf("%d %d %d",&dd,&mm,&yy);
 printf("\n Date Followed %d:%d:%d ",dd,mm,yy);
 printf("is %d:%d:%d \n\n",++dd,mm,yy);
}
