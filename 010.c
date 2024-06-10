#include <stdio.h>
main()
{
 char name[20],gender,place[20];
 printf("enter ur full name:-");
 scanf("%[^\n]",&name);

 fflush(stdin);
 printf("enter ur gender(m/f):-");
 scanf("%c",&gender);

 fflush(stdin);
 printf("enter ur native place:-");
 scanf("%s",&place);

 printf("%s- %c- %s",name,gender,place);
}
