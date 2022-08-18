/*Write a C program to create a structure of Book Detail and display the details of the book in appropriate format by passing
 structure as function argument.*/

#include <stdio.h>
struct book_detail
{
    char title[32];
    char author[32];
    char publisher[32];
    int price;
    int pages;
} b1;
int main()
{
    printf("\nEnter book title: ");
    gets(b1.title);

    printf("\nEnter author name: ");
    gets(b1.author);

    printf("\nEnter publisher: ");
    gets(b1.publisher);

    printf("\nEnter price of book: ");
    scanf("%d", &b1.price);

    printf("\nEnter Pages of Book: ");
    scanf("%d", &b1.pages);
    
    printf("\nBook details are:");

    printf("\nThe title of book is: %s", b1.title);
    printf("\nThe name of author: %s", b1.author);
    printf("\nName of publisher: %s",b1.publisher);
    printf("\nPrice of book: %d",b1.price);
    printf("\nPages of Book: %d", b1.pages);
}
/*#include <stdio.h>
#include <conio.h>
struct book_detail
{
    char author[20], name[20];
    int pages, price;
    int b;
};
void book(struct book_detail b);

void main()
{
    struct book_detail b;

    printf("\nEnter the Book Name: ");
    scanf("%s", b.name);
    printf("\nEnter the Author of Book: ");
    scanf("%s", b.author);
    printf("\nEnter the Pages of Book: ");
    scanf("%d", &b.pages);
    printf("\nEnter the Price of Book: ");
    scanf("%d", &b.price);

    book(b);
}
void book(struct book_detail b)
{
    printf("\nBook Name is: %s \n", b.name);
    printf("\nAuthor of Book is: %s \n", b.author);
    printf("\nPages of Book is: %d \n", b.pages);
    printf("\nPrice of Book is: %d \n", b.price);
}
*/
