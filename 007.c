\\C program to read total flying time from hyd to singapore in mins and display into hours and mins
#include <stdio.h>
main()
{
    int hrs,mins,remain;
    hrs=mins=remain=0;

    printf("hey enter flying time from hyderabad to singapore:-");
    scanf("%d",&mins);

    hrs=mins/60;
    remain=mins%60;
    printf("flying time from hyderabad to singapore %d hrs,%d mins",hrs,remain);
}

