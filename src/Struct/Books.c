#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char title[50];
    float price;
    int publication_year, pages;
    bool status;
}Book;

int main(int argc, char const *argv[])
{
    Book libro;
    strcpy(libro.title, "Programming in C! ");
    libro.price = 50.20;
    libro.publication_year = 2020;
    libro.pages = 450;
    libro.status = true;


    printf("The book's title is: %s.\n", libro.title);
    printf("The book's price is: %f.\n", libro.price);
    printf("The book's year of publication is: %d.\n", libro.publication_year);
    printf("The book's pages is: %d.\n", libro.pages);
    if (libro.status)
    {
        printf("The book's status is in: service\n");

    }
    else
    {
        printf("The book's status is: out of service\n");
    }
    
    
    return 0;
}

