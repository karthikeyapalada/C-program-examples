//C PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS VOWEL OR  CONSONANT

#include<stdio.h>
main()
{  char ch;
 
  printf("enter a alphabet:");
  scanf("%c",&ch);

  if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'
  || ch=='a' || ch=='e' || ch=='i' || ch=='o'   ||ch=='u')
     {  printf("%c is a vowel",ch);
     }
  else
      if (ch >= 'a' && ch <= 'z')
      {   printf("%c is consonant",ch);
      }
        else
        {  printf("invalid input");
        }  
   }
