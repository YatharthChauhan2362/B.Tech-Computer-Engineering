/*Write a program to calculate Net Salary. User has to input Basic Salary and Outputshould be:
  Enter Basic Salary : 5000(e.g. 5000)
  Allowances:
  DA = 70% of Basic Salary
  HRA = 7% of Basic Salary
  MA = 2% of Basic Salary
  TA = 4% of Basic Salary
  Deduction:
  PF = 12% of Basic Salary
  IT = any value (e.g. 500)
  Net Salary = Basic Salary + Allowances – Deduction*/

#include <stdio.h>
int main()
{
  int bs, da, hra, ma, ta, pf, it = 500, net_salary;

  printf("\n Enter The Basic Salary: ");
  scanf("%d", &bs);

  printf("\n Allowances: \n");

  da = (bs * 70) / 100;
  printf("\n DA = %d", da);

  hra = (bs * 7) / 100;
  printf("\n HRA = %d", hra);

  ma = (bs * 2) / 100;
  printf("\n MA = %d", ma);

  ta = (bs * 4) / 100;
  printf("\n TA = %d", ta);

  printf("\n");
  printf("\n Deducation: \n");

  pf = (bs * 12) / 100;
  printf("\n PF = %d", pf);
  printf("\n IT = %d", it);

  net_salary = bs + (da + hra + ma + ta) - (pf + it);
  printf("\n Net Salary = %d", net_salary);

  return 0;
}