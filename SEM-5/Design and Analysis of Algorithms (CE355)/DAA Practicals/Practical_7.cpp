#include <stdio.h>
#include <math.h>

void queen(int row, int p);
int chess[8], count;

int main()
{
    int p = 8;
    queen(1, p);
    return 0;
    printf("\n20DCE019-Yatharth Chauhan");
}

void print(int p)
{
    int i, j;
    printf("\n\nThis is Solution no. %d:\n\n", ++count);
    for (i = 1; i <= p; ++i)
        printf("\t%d", i);

    for (i = 1; i <= p; ++i)
    {
        printf("\n\n%d", i);
        for (j = 1; j <= p; ++j)
        {
            if (chess[i] == j)
                printf("\tQ");
            else
                printf("\t-");
        }
    }
    printf("\n\n\nThere are total 92 solutions for 8-queens problem.");
}

int place(int row, int column)
{
    int i;
    for (i = 1; i <= row - 1; ++i)
    {
        if (chess[i] == column)
            return 0;
        else if (abs(chess[i] - column) == abs(i - row))
            return 0;
    }

    return 1;
}

void queen(int row, int p)
{
    int column;
    for (column = 1; column <= p; ++column)
    {
        if (place(row, column))
        {
            chess[row] = column;
            if (row == p)
                print(p);
            else
                queen(row + 1, p);
        }
    }
}
