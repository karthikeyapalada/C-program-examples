 //C PROGRAM TO READ YOUR YEAR OF BIRTH AND CHECK WHETHER YOU WERE BORN ON LEAP YEAR OR NOT.
#include<stdio.h>
main()
{  int year;
 
  printf("enter your year of birth : ");
  scanf("%d",&year);
 
  if (year%4==0)
      { printf("you were born on leap year...");
      }
  else
      {    printf("you were born on non leap year...");
      }      
}
