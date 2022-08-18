/*Write a C program to check if the entered number is prime or not by using
types of user defined functions
(i) No arguments passed and no return value
(ii) No arguments passed but a return value
(iii) Argument passed but no return value
(iv) Argument passed and a return value*/

//(i) No arguments passed and no return value

/*#include <stdio.h>
void PrimeNumber();
main()
{
    PrimeNumber(); // argument is not passed
    return 0;
}
// return type is void meaning doesn't return any value
void PrimeNumber()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}
*/

//(ii) No arguments passed but a return value
/*
#include <stdio.h>
int getInteger();
int main()
{
    int n, i, flag = 0;
    // no argument is passed
    n = getInteger();
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    return 0;
}
// returns integer entered by the user
int getInteger()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    return n;
}
*/

//(iii) Argument passed but no return value
/*
#include <stdio.h>
void PrimeAndDisplay(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // n is passed to the function
    PrimeAndDisplay(n);
    return 0;
}
// return type is void meaning doesn't return any value
void PrimeAndDisplay(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}
*/

//(iv) Argument passed and a return value

#include <stdio.h>
int PrimeNumber(int n);
int main()
{
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // n is passed to the checkPrimeNumber() function
    // the returned value is assigned to the flag variable
    flag = PrimeNumber(n);
    
    if (flag == 1)
        printf("%d is not a prime number", n);
    else
        printf("%d is a prime number", n);
    return 0;
}
// int is returned from the function
int PrimeNumber(int n)
{
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}
