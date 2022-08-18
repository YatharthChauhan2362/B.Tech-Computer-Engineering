/*In a town, the percentage of men is 52. The percentage of total literacy is 48. If  total  percentage  of  literate  men  is
  35  of  the  total  population,  write  a program  to  find  the  total  number  of  illiterate  men  and  women  if  the
  population  of  the  town  is  80,000.Write  Algorithms  and  Flowchart  of  this program.*/

#include <stdio.h>
int main()
{
  int p = 80000, m, w, tl, lm, lw;

  printf("\n Total Population is = %d", p);

  m = (p * 52) / 100;
  w = p - m;

  printf("\n Total Men in Population are = %d", m);
  printf("\n Total Women in Population are = %d", w);

  tl = (p * 48) / 100;
  lm = (p * 35) / 100;
  lw = tl - lm;

  printf("\n Total Literate Men = %d", lm);
  printf("\n Total Literate Women = %d", lw);

  printf("\n Total Iliterate Men = %d", m - lm);
  printf("\n Total Iliterate Women = %d", w - lw);

  return 0;
}