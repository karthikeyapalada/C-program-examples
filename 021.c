#include <stdio.h>

int main() {
    int numfriends;
    float totalBill, tipPercentage, tipAmount, billPerPerson;

    printf("Enter the total bill amount: ");
    scanf("%f", &totalBill);

    printf("Enter the number of friends: ");
    scanf("%d", &numfriends);

    printf("Enter the tip percentage: ");
    scanf("%f", &tipPercentage);

    tipAmount = (tipPercentage / 100) * totalBill;
    totalBill += tipAmount;
    billPerPerson = totalBill / numfriends;

    printf("\nTotal bill: %.2f\n", totalBill);
    printf("Tip amount: %.2f\n", tipAmount);
    printf("Each person should pay: %.2f\n", billPerPerson);
}
