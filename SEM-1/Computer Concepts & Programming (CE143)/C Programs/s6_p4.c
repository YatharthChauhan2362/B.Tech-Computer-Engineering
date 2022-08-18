/*Write a program for a match-stick game between the computer and a user.
 Your Program should ensure that the computer always wins. Rules for the games are as follows:
 ● There are 21 match-sticks.
 ● The computer asks the player to pick 1, 2, 3, or 4 match-sticks.
 ● After the person picks, the computer does its picking.
 ● Whoever is forced to pick up the last match-stick loses the game.
 Use while loop, break and Continue Statements.*/

#include <stdio.h>

int main()
{
    int m = 21, user_choice, computer_choice;

    while (1)
    {
        printf("\nTotal match-sticks = %d\n", m);

        printf("Pick 1 or 2 or 3 or 4 matches\n");
        scanf("%d", &user_choice);

        if (user_choice > 4 || user_choice < 1)
            continue;

        m = m - user_choice;

        printf("Number of matches left = %d\n", m);

        computer_choice = 5 - user_choice;

        printf("out of which computer picked up %d\n", computer_choice);

        m = m - computer_choice;

        if (m == 1)
        {
            printf("\nNumber of matche-sticks left = %d\n", m);
            printf("You lost the Game\n");
            break;
        }
    }

    return 0;
}
