#include <stdio.h>
#define showLine printf("++++++++++++++++++\n");

int main() {
    char empId[20], empName[50];
    float salary, tax, social, netSalary;

    showLine;
    printf("Employee Salary Calculation\n");
    showLine;
    printf("Enter Employee ID: ");
    scanf("%s", empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    tax = salary * 0.07;
    social = salary * 0.03;
    netSalary = salary - tax - social;

    showLine
    printf("Employee ID: %s\n", empId);
    printf("Employee Name: %s\n", empName);
    printf("Salary: %.2f\n", salary);
    printf("Tax (7%%): %.2f\n", tax);
    printf("Social Security (3%%): %.2f\n", social);
    printf("Net Salary: %.2f\n", netSalary);
    showLine

    return 0;
}