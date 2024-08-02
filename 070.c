//write a program in c to accept a grade and declare the equivalent description: Grade Description
//E Excellent
//V Very Good
//G Good
//A Average
//F Fail
#include <stdio.h>
#include <ctype.h>
main()
{
 char ch ;
 printf("Enter Your Grades : ");
 scanf("%c",&ch);
 ch = tolower(ch);
 switch (ch)
 {
 case 'e':
 printf("\n Excellent \n\n");
 break;
 case 'v':
 printf("\n Very Good \n\n");
 break;
 case 'g':
 printf("\n Good \n\n");
 break;
 case 'a':
 printf("\n Average \n\n");
 break;
 case 'f':
 printf("\n Fail \n\n");
 break;
 }
}

