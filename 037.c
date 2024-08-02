\\C PROGRAM TO READ RATING OF 3 MOVIES OF UR CHOICE AND DISPLAY WHICH IS THE HIT MOVIE .
#include <stdio.h>
main()
{
    char m1[50], m2[50], m3[50];
    int r1, r2, r3;

    r1=r2=r3=0;

    printf("Enter the name of the first movie: ");
    scanf("%s", &m1);
    printf("Enter the rating of the first movie: ");
    scanf("%d", &r1);

    printf("Enter the name of the second movie: ");
    scanf("%s",&m2);
    printf("Enter the rating of the second movie: ");
    scanf("%d",&r2);

    printf("Enter the name of the third movie: ");
    scanf("%s", &m3);
    printf("Enter the rating of the third movie: ");
    scanf("%d",&r3);

       if (r1 > r2 && r1 > r3)
            {
             printf("The hit movie is: %s with a rating of %d\n", m1, r1);
            }
    else
        if (r2 > r1 && r2 > r3)
        {
        printf("The hit movie is: %s with a rating of %d\n", m2, r2);
        }
          else
        {
        printf("The hit movie is: %s with a rating of %d\n", m3, r3);
         }
}
