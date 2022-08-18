/*A cashier has currency notes of denominations 10,50 and 100.If the amount to  be  withdrawn  is  input
 through  the keyboard in  hundreds,  find  the  total number of currency notes of each denomination the
 cashier will have to give to the withdrawer.*/

#include <stdio.h>
int main()
{
    int N_10, N_50, N_100;
    int amount;

    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    N_100 = amount / 100;
    amount = amount % 100;

    N_50 = amount / 50;
    amount = amount % 50;
    
    N_10 = amount / 10;
    amount = amount % 10;

    printf("\n100 * % d = % d", N_100, 100 * N_100);
    printf("\n50 * % d = % d", N_50, 50 * N_50);
    printf("\n10 * % d = % d", N_10, 10 * N_10);
    printf("\nreaming amount: % d", amount);

    return 0;
}