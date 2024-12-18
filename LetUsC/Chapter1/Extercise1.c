// Write a program to Calculate Ramesh's Gross Salary.
#include<stdio.h>

void main() {
    float salary, dearnessAllowance, rentAllowance, grossSalary;

    printf("Enter Ramesh's Salary: ");
    scanf("%f", &salary);

    dearnessAllowance = salary * 40 / 100;
    rentAllowance = salary * 20 / 100;
    grossSalary = salary + dearnessAllowance + rentAllowance;

    printf("The Gross Salary of Ramesh is: %.2f\n", grossSalary);
}