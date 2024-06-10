#include <stdio.h>
main()
{
    int length, width, area;
    length=width=area=0;

    printf("Enter length of the rectangle: ");
    scanf("%d",&length);

    printf("enter width of the rectangle :");
    scanf("%d",&width);

    area = length * width;

    printf("Area of the rectangle: %d\n", area);
}
