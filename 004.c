\\c program to read marks of 5 subjects then calculate total& avg
#include<stdio.h>
main()
{
    int eng,sans,maths,phy,chem,tot;
    float avg;
    eng=sans=maths=phy=chem=tot=avg=0;

    printf("enter your english marks:-");
    scanf("%d",&eng);

    printf("enter your sanskrit marks:-");
    scanf("%d",&sans);

    printf("enter your maths marks:-");
    scanf("%d",&maths);

    printf("enter your physics marks:-");
    scanf("%d",&phy);

    printf("enter your chemistry marks:-");
    scanf("%d",&chem);

    tot=eng+sans+maths+phy+chem;
    avg = tot/5.0;

    printf("your total marks is:- %d",tot);
    printf("\n your average marks is:-%.2f",avg);
}
