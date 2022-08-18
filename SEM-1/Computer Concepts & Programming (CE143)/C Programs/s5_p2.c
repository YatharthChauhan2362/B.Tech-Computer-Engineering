/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
 write a program to determine the youngest of the three.
 (Hint: Use Nested Switch Statement)*/

#include <stdio.h>
int main()
{
       int ram, shyam, ajay;

       printf("\nEnter The Age of Ram: ");
       scanf("%d", &ram);

       printf("\nEnter The Age of Shyam: ");
       scanf("%d", &shyam);

       printf("\nEnter The Age of Ajay: ");
       scanf("%d", &ajay);

       switch (ram < shyam)
       {
       case 0:
              switch (shyam < ajay)
              {
              case 0:
                     printf("\nAjay is youngest than Ram and Shyam");
                     break;
              case 1:
                     printf("\nShyam is youngest");
                     break;
              }
              break;
       case 1:
              switch (ram < ajay)
              {
              case 0:
                     printf("\nAjay is youngest than Ram and Shyam");
                     break;
              case 1:
                     printf("\nRam is youngest");
                     break;
              }
              break;
       }
}