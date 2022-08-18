/*Create a Union called library to hold accession number, title of the book ,author name, price of the book and flag indicating whether
 the book is issued or not.(flag = 1 if the book is issued , flag = 0 otherwise).
 Write a program to enter data of one book and display the data.*/

#include <stdio.h>
union book_detail
{
    char title[32];
    char author[32];
    int price;
    int accession_no;
} b1;
int main()
{
    int flag;

    printf("\nEnter the title of book: ");
    gets(b1.title);

    printf("\nEnter the author of book: ");
    gets(b1.author);

    printf("\nEnter Accession no of book: ");
    scanf("%d", &b1.accession_no);

    printf("\nEnter price of books: ");
    scanf("%d", &b1.price);

    printf("\nEnter your choice");
    printf("\n1. book is issued");

    printf("\n2. book is not issued: ");
    scanf("%d", &flag);

    printf("\n Book details are :");
    printf("\nTitle: %s", b1.title);
    printf("\nAuthor %s", b1.author);
    printf("\nAccession_no %d", b1.accession_no);
    printf("\nprice %d ", b1.price);
}