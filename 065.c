//C PROGRAM TO CHECK WHETHER THE CHARACTER PRESSES THROUGH  THE KEYBORAD IS A DIGIT OR NOT .
#include <stdio.h>
main()
 {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 
    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }
}
