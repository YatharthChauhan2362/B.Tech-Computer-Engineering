/*If the cost price and selling price of an item is input through the keyboard, write a program to
 determine whether the seller has made profit or incurred loss. Also determine how much profit he
 made or loss he incurred.*/

#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("\nWe earn %f profit", profit);
    }
    else if (sp < cp)
    {
        loss = cp - sp;
        printf("\nWe incurred %f loss", loss);
    }
    else
    {
        printf("\nwe don't get any profit and loss");
    }
    return 0;
}
