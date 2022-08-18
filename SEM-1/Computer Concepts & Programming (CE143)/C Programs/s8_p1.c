/*Take a user input for a string and calculate the number of alphabets, digits and special characters from the
 given input.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int Digits, Alphabet, SpecialChar, Spaces;
    int counter;

    Digits = Alphabet = SpecialChar = Spaces = 0;

    printf("Enter a string: ");
    gets(name);

    for (counter = 0; name[counter] != '\0'; counter++)
    {

        if (name[counter] >= '0' && name[counter] <= '9')
            Digits++;

        else if ((name[counter] >= 'A' && name[counter] <= 'Z') || (name[counter] >= 'a' && name[counter] <= 'z'))
            Alphabet++;

        else if (name[counter] == ' ')
            Spaces++;

        else
            SpecialChar++;
    }

    printf("\nDigits: %d", Digits);
    printf("\nAlphabets: %d", Alphabet);
    printf("\nSpaces: %d", Spaces);
    printf("\nSpecial Characters: %d", SpecialChar);

    return 0;
}