//C PROGRAM TO ACCEPT A GRADE AND DECLARE DESCRIPTION  WITH CODES.
#include <stdio.h>
main()
{
    char code;

    printf("Enter an CODE: ");
    scanf("%c", &code);
  
    switch (code)
     {
        case 'S':

            printf("SUPER");
            break;
        case 'A':
            printf("VERY GOOD");
            break;
        case 'B':
            printf("FAIR");
            break;
        case 'Y':
                printf("ABSENT");
            break;
        case 'F':
            printf("FAILS");
            break;
        default:
            printf("\nError: Invalid code\n");
    }
}

