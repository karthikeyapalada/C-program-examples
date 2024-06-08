\\C program to swap values of two variables A and B without 3rd variable#include<stdio.h>
main()
{
 int a,b;
 a=b=0;

 printf("enter value of A :-");
 scanf("%d",&a);

 printf("enter value of B :-");
 scanf("%d",&b);

 a=a+b;
 b=a-b;
 a=a-b;
 printf("value of A is:- %d",a);
 printf("\nvalue of B is:- %d",b);
} 
