/*The policy followed by a company to process customer orders is given by the following rules:
a)If a customer order is less than or equal to that in stock and ‘has credit’ is OK, supply ‘has requirements’.
b)If ‘has credit’ is not OK do not supply Send him intimation.
c)If ‘has credit’ is OK but the item in stock is less than ‘has ordered’, supply what is in stock and
 Intimate him that the balance will be refunded.
 Write a C program to implement the company policy.*/

#include <stdio.h>
int main()
{
    int stock = 500, order;
    char credit;

    printf("\n Enter the credit : ");
    scanf("%c", &credit);

    fflush(stdin);

    printf("\n Enter the Customer Order : ");
    scanf("%d", &order);

    fflush(stdin);

    printf("\n Availablr Stock: %d", stock);

    if (order <= stock && credit == 'y' || credit == 'Y')
        printf("\n Supply has requirement", order);

    else if (credit == 'n' || credit == 'N')
        printf("\n Do not Supply");

    else
        printf("\n Supplied products are %d and balance will be refunded", stock);

    return 0;
}