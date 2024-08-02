//write a program to display the traffic control signal lights based on the following.. If user entered character is R or r then print “RED light please STOP”.If user entered character is Y or y then print “YELLOW light please check and go”. If user entered character is G or g then print “GREEN light please GO”.If the user enter any other character , there is no signal point.
#include<stdio.h>
#include <ctype.h>
main()
{
 char ch;
 printf("Enter An input : ");
 scanf("%c",&ch);
 ch = tolower(ch);
 switch(ch)
 {
 case 'r':
 printf("\n RED light please STOP \n\n");
 break;
 case 'y':
 printf("\n YELLOW light please CHECK and go \n\n");
 break;
 case 'g':
 printf("\n GREEN light please go \n\n");
 break;
 case 'h':
 exit(0);
 }
}
