//C PROGRAM TO ACCEPT MARKS OF 3 SUBJECTS AND PERFROM GRADE AND CALCULATE TOTAL AND AVERAGE .
#include <stdio.h>
main()
{
    int s1,s2,s3;
    float total,avg,grade;

    printf("enter the marks of 1st subject :");
    scanf("%d",&s1);

    printf("enter the marks of 2nd subject :");
    scanf("%d",&s2);

    printf("enter the marks of 3rd subject :");
    scanf("%d",&s3);


    total = s1+s2+s3;
    avg = total/3;
    grade=total/300*100;


    printf("\n total is %.2f",total);
    printf("\n average is %.2f",avg);
    printf("\n grade is %.2f",grade);


    if (grade>90)
    {
        printf(" \n your grade is A+");
    }
    else
        if(grade<80 && grade >90)
    {
        printf(" \n your grade is A");
    }
    else
        if (grade<70 && grade>80)
    {
        printf(" \n your grade is B+");
    }
    else
        if (grade<60 && grade>70)
    {
        printf("\n your grade is B ");
    }
    else
        if (grade<50 && grade>60)
    {
        printf("\n your grade is C");
    }
    else
        printf("\n your grade is F ");
}
