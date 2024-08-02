C PROGRAM TO AN APPLICATION FOR RESTAURANT.

INPUT:-
#include <stdio.h>
#define MAX_ITEMS 5

typedef struct {
    int sno;
    char name[30];
    float price;
} MenuItem;

void printMenu(MenuItem menu[]) {
    printf("---- Menu ----\n");
    printf("S.No   Items           Price\n");
    printf("----------------------------\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("%-6d %-15s RS%.2f\n", menu[i].sno, menu[i].name, menu[i].price);
    }
    printf("----------------------------\n");
}

main() {
    MenuItem menu[MAX_ITEMS] = {
        {1, "IDDLI", 25},
        {2, "DOSA", 50},
        {3, "VADA", 20},
        {4, "UPMA", 25},
        {5, "EXIT", 0}
    };

    int order[MAX_ITEMS][2];
    int numItems = 0;

    printMenu(menu);

    int choice, quantity;
    float total = 0.0;

    printf("Enter item number to select (0 to finish): ");
    scanf("%d", &choice);
    if (choice > 0 && choice <= MAX_ITEMS) {
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        order[numItems][0] = choice - 1;
        order[numItems][1] = quantity;
        numItems++;

        total += menu[choice - 1].price * quantity;
    } else {
        printf("Invalid item number.\n");
        return 1;
    }

    printf("\n---- Receipt ----\n");
    for (int i = 0; i < numItems; i++) {
        int itemIndex = order[i][0];
        int quantity = order[i][1];
        printf("%d x %s - RS %.2f\n", quantity, menu[itemIndex].name, menu[itemIndex].price * quantity);
    }
    printf("Total bill: RS %.2f\n", total);
                   }
