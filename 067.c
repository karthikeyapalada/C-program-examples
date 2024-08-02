//c program that prints the given three integers in ascending and descending order   using if-else.
INPUT:-
#include <stdio.h>
#include <string.h>
main()
{
 int no1 ,no2 , no3 ;
 char order[20] ;
 no1 = no2 = no3 = 0;
 printf("Enter Any Three Numbers : ");
 scanf("%d %d %d", &no1 ,&no2,&no3);
 printf("Enter Arrangement Order (ascending/descending) : ");
 scanf("%s",&order);
 if (strcmp(order,"descending")==0)
 {
 if (no1 > no2 && no2 > no3 && no3 < no1)
 printf("The Descending Order Is %d %d %d",no1,no2,no3);
 else
 if (no2 > no1 && no1 > no3 && no3 < no2)
 printf("The Descending Order Is %d %d %d",no2,no1,no3);
 else
 if (no3 > no1 && no1 > no2 && no3 > no2)
 printf("The Descending Order Is %d %d %d",no3,no1,no2);
 else
 if (no1 > no2 && no2 < no3 && no3 < no1)
 printf("The Descending Order Is %d %d %d",no1,no3,no2);
 else
 if (no1 < no2 && no2 < no3 && no3 > no1)
 printf("The Descending Order Is %d %d %d",no3,no2,no1);
 }

 else
 if (strcmp(order,"ascending")==0)
 {
 if (no1 < no2 && no2 < no3 && no3 > no1)
 printf("The Ascending Order Is %d %d %d",no1,no2,no3);
 else
 if (no2 < no1 && no1 < no3 && no3 > no2)
 printf("The Ascending Order Is %d %d %d",no2,no1,no3);
 else
 if (no3 < no1 && no1 < no2 && no3 < no2)
 printf("The Ascending Order Is %d %d %d",no3,no1,no2);
 else
 if (no1 < no2 && no2 > no3 && no3 > no1)
 printf("The Ascending Order Is %d %d %d",no1,no3,no2);
 else
 if (no1 > no2 && no2 > no3 && no3 < no1)
 printf("The Ascending Order Is %d %d %d",no3,no2,no1);
 }
}
