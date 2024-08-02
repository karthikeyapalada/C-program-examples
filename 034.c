 \\ C PROGRAM TO  3 NUMBERS AS INPUT & ARRANGE IN ASCENDING ORDER.
 USING ONLY IF AND ELSE STATEMENTS.
#include <stdio.h>
main()
{
    int a, b, c, temp;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

   if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

  printf("The numbers in ascending order are: %d %d %d\n", a, b, c);

}
