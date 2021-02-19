// Crea a program that simulates a library with dynamic strings
// It has to print the book's name and author's name.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char *book_name;
    char *author_name;
};

int main(int argc, char const *argv[])
{
    struct Book book;
    int max = 50;
    char temp[max];

    printf("Type the name of the book: ");
    fgets(temp, max, stdin);
    temp[strcspn(temp, "\n")] = 0;

    book.book_name = malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(book.book_name, temp);

    printf("Type the name of the author: ");
    fgets(temp, max, stdin);
    temp[strcspn(temp, "\n")] = 0;

    book.author_name = malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(book.author_name, temp);

    if (!book.book_name || !book.author_name)
    {
        fprintf(stderr, "Memory couldn't be allocated.\n");
        return EXIT_FAILURE;
    }

    printf("The book name is: %s\n", book.book_name);
    printf("The author name is: %s\n", book.author_name);

    return EXIT_SUCCESS;
}
