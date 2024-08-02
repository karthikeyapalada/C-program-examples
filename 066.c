//C program which reads two integer values .if the first is lesser print the message“up” . if the second is lesser ,print the message “down” if they are equal , print the message “equal”.
#include <stdio.h>
main()
{
 int no1 , no2 ;
 no1 = no2 = 0;
 printf("Enter A Number : ");
 scanf("%d",&no1);
 printf("Enter Another Number : ");
 scanf("%d",&no2);
 if (no1 < no2)
 printf("\n UP \n\n");
 else
 if (no2 > no2)
 printf("\n DOMN \n\n");
 else
 printf("\n equal \n\n");
}
