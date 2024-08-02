//C PROGRAM TO ARITHMETIC OPERATIONS (USING SWITCH CASE).
#include <stdio.h>
main()
{  char operator;
    float operand1, operand2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);     printf("Enter two operands: ");
    scanf("%f %f", &operand1, &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
}
