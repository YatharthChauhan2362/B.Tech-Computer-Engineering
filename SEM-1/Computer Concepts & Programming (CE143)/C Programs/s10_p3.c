#include <stdio.h>
struct employee
{
    char Name[50];
    char ad[50];
    int Age;
    struct salary
    {
        int sal;
    } s;
} Emp;
void main()
{
    printf("\nEnter Employee Name: ");
    gets(Emp.Name);

    printf("\nEnter Employee address: ");
    gets(Emp.ad);

    printf("\nEnter Employee Age: ");
    scanf("%d", &Emp.Age);

    printf("\nEnter Employee Salary: ");
    scanf("%d", &Emp.s.sal);

    printf("\nThe name of employee is: %s", Emp.Name);
    printf("\nThe address of employee: %s", Emp.ad);
    printf("\nAge of employee: %d", Emp.Age);
    printf("\nSalary of employee: %d", Emp.s.sal);
}