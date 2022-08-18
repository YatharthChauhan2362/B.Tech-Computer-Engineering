/*Write a menu driven program which has following options:
 1. Prime or not
 2. Perfect number or not
 3. Factorial of a number
 4. Exit
 Use  do...while  statement  so that  the  menu  is  displayed  at  least  once.  Also use Switch statement.*/

#include <stdio.h>
int main()
{
    int c, i, n1, n2, n3, sum = 0;
    long fact = 1;

    do
    {
        printf("\n 1.Prime or not");
        printf("\n 2.Perfect or not");
        printf("\n 3.Factorial");
        printf("\n 4.Exit");

        printf("\n Enter your choice : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("\n Enter The Number : ");
            scanf("%d", &n1);

            for (i = 2; i <= n1; i++)
            {
                if (n1 % i != 0)
                {
                    printf("\n Given number is prime number");
                }
                else
                {
                    printf("\n Given number is not prime number");
                }
                break;
            }

        case 2:
            printf("\n Enter The Number : ");
            scanf("%d", &n2);

            for (i = 1; i < n2; i++)
            {
                if (n2 % i == 0)
                {
                    sum = sum + i;
                }
            }
            if (sum == n2)
            {
                printf("\n Given number is a Perfect number");
            }
            else
            {
                printf("\n Given number is not a Perfect number");
            }
            break;

        case 3:
            printf("\n Enter The Number : ");
            scanf("%d", &n3);

            for (i = 1; i <= n3; i++)
            {
                fact = fact * i;
            }
            printf("\n Factorial of %d is %ld", n3, fact);
            break;

        case 4:
            exit(0);
            break;
        }
    } while (1);
}