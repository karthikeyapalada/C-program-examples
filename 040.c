//C PROGRAM TO READ A CHARACTER & CHECK WHETHER IT IS CAPITAL LETTER OR LOWER CASE LETTER OR DIGIT OR SPECIAL CHARACTER.
#include <stdio.h>
main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        {
        printf("%c is a capital letter.\n", ch);
        }

      else
          if (ch >= 'a' && ch <= 'z')
        {
        printf("%c is a lowercase letter.\n", ch);
        }
            else
                if (ch >= '0' && ch <= '9')
                 {
                  printf("%c is a digit.\n", ch);
                  }
                  else
                {
                 printf("%c is a special character.\n", ch);
                 }
}
