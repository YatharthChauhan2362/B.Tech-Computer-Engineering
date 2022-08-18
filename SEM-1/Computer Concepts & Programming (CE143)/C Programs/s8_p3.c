/*Write a C program to check if the user inputed string is palindrome or not using recursion*/

#include <stdio.h>
#include <string.h>

void palindrome(char[], int);

int main()
{
    char word[15];

    printf("\nEnter a word to check if it is a palindrome: ");
    scanf("%s", word);

    palindrome(word, 0);

    return 0;
}

void palindrome(char word[], int i)
{
    int len = strlen(word) - (i + 1);

    if (word[i] == word[len])
    {
        if (i + 1 == len || i == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        palindrome(word, i + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
