#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LENGTH(x) (sizeof(x) / sizeof(x[0]))

typedef struct
{
    char title[50];
    float price;
    int publication_year, pages;
    bool status;
    char status_string[4];
}Book;

void write_items(Book books[], size_t len);
void read_items(Book array[], size_t len);

int main(int argc, char const *argv[])
{
    Book books[5];

    size_t len = LENGTH(books);

    write_items(books, len);
    read_items(books, len);   

    return 0;
}

void write_items(Book books[], size_t len) {

    for (size_t i = 0; i < len; i++)
    {
        char str[10];
        sprintf(str, "%d", i+1);

        char info[50] = "Book number ";
        strcat(info, str);

        strcpy(books[i].title, info);
        books[i].price = 10 + i;
        books[i].publication_year = 1950 + (i + 1);
        books[i].pages = 50 + i + 1;

        if (((i + 1) % 2) == 0)
        {
            books[i].status = false;
        }
        else
        {
            books[i].status = true;
        }

        if (books[i].status)
        {
            strcpy(books[i].status_string, "yes");
        }
        else
        {
            strcpy(books[i].status_string, "no");
        }
        
    }

    printf("Holala\n");
    
}

void read_items(Book books[], size_t len) {
    for (int i = 0; i < len; i++)
    {
        printf(
            "The book's name is %s.\nThe book's price is %1.2f.\nThe book's year of publication is %d.\nThe book's pages is %d.\nThe book's status is %s.\n", 
            books[i].title, books[i].price, books[i].publication_year, books[i].pages, books[i].status_string
        );
        
        printf("\n");
    }
    
}