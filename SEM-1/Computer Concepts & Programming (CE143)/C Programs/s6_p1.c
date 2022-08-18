/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised
 to the power of another. (Use While loop)*/

#include <stdio.h>
int main()
{
   int count = 1;
   int n1 = 2;
   int n2 = 10;
   int result = 1;

   while (count <= n2)
   {
      result = n1 * result;
      count++;
   }
   printf("Result: %d", result);

   return 0;
}