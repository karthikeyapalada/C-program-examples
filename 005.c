\\ C program to read basics salary of an employee and display gros salary and net salary
#include <stdio.h>
main()
{
  float bs,gs,ns,hra,da,pf;
  bs=gs=ns=hra=da=pf=0;

 printf("enter your basis salary :-");
 scanf("%f",&bs);

 hra=bs*20/100;
 da=bs*10/100;
 pf=bs*5/100;

 gs=bs=hra=da;
 ns=gs-pf;

 printf("your gross salary is %.4f",gs);
 printf("\n your net salary is %.4f",ns);
}
