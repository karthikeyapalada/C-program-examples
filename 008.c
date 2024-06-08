\\C program to read days from the user and convert it years,months,weeks,days.
#include <stdio.h>
main()
{
    int years, days, weeks, months, dates;
    years = days = weeks = months = dates = 0;

    printf("Enter the total days: ");
    scanf("%d", &dates);

    years = dates / 365;
    dates %= 365;
    months = dates / 30;
    dates %= 30;
    weeks = dates / 7;
    days = dates % 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
}
