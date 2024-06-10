#include <stdio.h>
 main()
 {
    int rollNo;
    char gender;
    char name[20];
    double height;

    printf("Enter roll no: ");
    scanf("%d", &rollNo);

    printf("Enter gender (m/f): ");
    scanf(" %c", &gender);

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter height: ");
    scanf("%lf", &height);

    printf("Size of roll no: %lu bytes\n", sizeof(rollNo));
    printf("Size of gender: %lu bytes\n", sizeof(gender));
    printf("Size of name: %lu bytes\n", sizeof(name));
    printf("Size of height: %lu bytes\n", sizeof(height));

}
