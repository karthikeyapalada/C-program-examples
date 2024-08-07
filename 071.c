\\ C PROGRAM TO A PARK FOR TICKET PRICING SYSTEM ACCORDING TO POLICIES.

#include <stdio.h>
int main() {
    int age, day, mem, bp, add, dis, fin;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Determine base price based on age
    if (age >= 13 && age <= 64) 
    {  bp = 30;
    } else if (age >= 0 && age <= 12) {
        bp = 15;
    } else {
        bp = 20;
    }

    // Determine additional cost based on day of the week
    printf("For weekends enter 1:\n");
    printf("For weekdays enter 0:\n");
    scanf("%d", &day);

    if (day == 1) {
        add = 10;
    } else {
        add = 0;
    }

    // Determine discount based on membership
    printf("If you are a member enter 1\n");
    printf("If you are not a member enter 0:\n");
    scanf("%d", &mem);

    if (mem == 1) {
        dis = (bp+add) * 20 / 100;
    } else {
        dis = 0;
    }

    // Calculate final price
    fin = bp + add - dis;
    printf("Cost of the ticket is %d\n", fin);

    return 0;
}
