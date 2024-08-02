// C PROGRAM TO THAT PROMPTS THE USER TO ENTER THE NAMES AND AGES OF TWO FRIENDS ,AND DISPLAYS WHICH IS OLDER OR IF THEY ARE THEY SAME AGE .
#include <stdio.h>
main()
{
    char n1[20],n2[20];
    int a1,a2;

    printf("name of the 1st person:");
    scanf("%s",&n1);

    printf("name of the 2st person:");
    scanf("%s",&n2);

    printf("enter the age of 1st person:");
    scanf("%d",&a1);

    printf("enter the age of 2nd person:");
    scanf("%d",&a2);

    if (a1>a2)
    {
    printf("%s is older than %s",n1,n2);
    }
    else
        if (a2>a1)
        {
      printf("%s is older than %s",n2,n1);
         }
         else
         {printf("both are same age ");
         }
}
