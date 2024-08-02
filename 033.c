 //C PROGRAM TO READ 3 PENS PRICE AND DISPLAY WHICH IS COSTLY.\\*
#include <stdio.h>
main()
 {
    int p1,p2,p3;
     p1=p2=p3=0;
     printf("enter price of reynolds :");
     scanf("%d",&p1);
     printf("enter price of montex : ");
     scanf("%d",&p2);
     printf("enter price of parker :");
     scanf("%d",&p3);

     if (p1>p2 && p1>p3)
        printf("Reynolds is costliest");
       else
           if (p2>p1 && p2>p3)
              printf("Montex is costliest");
             else
                printf("Parker is costliest");  
 }
