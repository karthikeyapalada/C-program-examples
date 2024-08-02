//C PROGRAM TO ACCEPT THE HEIGHT OF A PERSON IN CM & CATEGORISE THE PERSON THEIR HEIGHT.

#include <stdio.h>
main()
{    float cm,feet;
 
    printf("enter height in cms :-");
    scanf("%f",&cm);

    feet=cm/30.48;

    if (feet>=5.5)
    { printf("you are taller");
    }
      else
          if (feet<=4.5)
      { printf("you are low height");
      }
             else
             {  printf("you are average height ");
             }
    printf("\nyou are height is %.2f feet",feet);
}

