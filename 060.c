//C PROGRAM TO CHECK WHETHER INPUTTED NO IS EVEN OR ODD USING TERNARY OPERATER. (USE ONLY % OPERATER).
#include <stdio.h>
main()
{  int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
}

