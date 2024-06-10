#include <stdio.h>
 main()
 {
   float basicSalary, allowances, deductions, grossSalary, netSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter allowances: ");
    scanf("%f", &allowances);
    printf("Enter deductions: ");
    scanf("%f", &deductions);

    grossSalary = basicSalary + allowances;
    netSalary = grossSalary - deductions;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);
}
