#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * <b>This is a program that simulates the behavior of a library.</b>
 * The line 10, declared the constant S. It'll be the limit for the string length.
 * MAX_BOOKS, it's the maximum number of the books that can be allocated in a library.
 * MAX_LIBRARY, it's the maximum number of library files that can be allocated.
 */
#define S 50
#define MAX_BOOKS 10
#define MAX_LIBRARY 3

void set_init_value();
void add_library();
void set_null_char();
void add_book();
void make_query();

struct Book
{
    char book_name[S];
    char author[S];
    bool full_book;
};

struct Library
{
    char library_name[S];
    struct Book book[MAX_BOOKS];
    bool full_library;
};

struct Library library[MAX_LIBRARY];

int main(int argc, char const *argv[])
{
    char num[S];
    short option;
    char operation;

    do
    {
        do
        {
            printf("\nChoose one option to do:\n");
            printf("(1) Add new library.\n");
            printf("(2) Add a new book to a library.\n");
            printf("(3) Counsult a book.\n");
            printf("Type your choice: ");
            scanf("%hd", &option);
            getchar();

        } while (option < 1 || option > 3);

        switch (option)
        {
        case 1:
            add_library(); // Add a new library.
            break;

        case 2:
            add_book(); // Add a new book to existing library.
            break;

        case 3:
            make_query(); // Consult a book into an existing library.
            break;
            
        default:
            printf("Make sure you choise a correct option.\n");
            break;
        }

        printf("Do you want to do any operation else? (Y/N): ");
        operation = getchar();

    } while ((operation == 'Y') || (operation == 'y'));

    return EXIT_SUCCESS;
}

/**
 * @brief Set the null char value
 * 
 * @param array The string that needs '/0' insted of '/n'.
 */
void set_null_char(char array[])
{
    for (size_t i = 0; i < S; i++)
    {
        if (array[i] == '\n')
        {
            array[i] = '\0';
        }
    }
}

/**
 * @brief Set the init value to 0 of all obiect inner the array.
 */
void set_init_value()
{
    for (size_t i = 0; i < MAX_LIBRARY; i++)
    {
        library[i].full_library = false;

        for (size_t i = 0; i < MAX_BOOKS; i++)
        {
            library[i].book[i].full_book = false;
        }
    }
}

/**
 * @brief The user can add a new library.
 */
void add_library()
{
    bool status = false;

    for (int i = 0; i < MAX_LIBRARY && status == false; i++)
    {

        if (library[i].full_library == false)
        {
            printf("Type the library's name: ");

            fgets(library[i].library_name, S, stdin);

            set_null_char(library[i].library_name);

            library[i].full_library = true;
            status = true;
        }
    }

    if (status == false)
    {
        printf("There's no space for a new library.\n");
    }
}

/**
 * @brief Add a new book to existing library.
 * 
 */
void add_book()
{
    char name[S];
    short option;
    bool status = false;

    printf("In what library you want to add the new book?: \n");

    for (size_t i = 0; i < MAX_LIBRARY; i++)
    {

        if (library[i].full_library == true)
        {
            printf("(%zu) %s\n", i, library[i].library_name);
        }
    }

    printf("Type your choice: ");
    scanf("%hd", &option);
    getchar();

    for (size_t j = 0; j < MAX_BOOKS && status == false; j++)
    {
        status = false;
        if (library[option].book[j].full_book == false)
        {

            printf("Type the book's name: ");
            fgets(library[option].book[j].book_name, S, stdin);
            set_null_char(library[option].book[j].book_name);

            printf("Type the author's name: ");
            fgets(library[option].book[j].author, S, stdin);
            set_null_char(library[option].book[j].author);

            library[option].book[j].full_book = true;
            status = true;
        }

        if (status == false)
        {
            printf("There's no space for another book.\n");
        }
    }
}

/**
 * @brief To make a query, asking with either boook's name or author's name.
 * 
 */
void make_query()
{
    short option;
    char found[S];

    printf("Do you want to make the query with: \n");
    printf("(1) Author's name\n");
    printf("(2) Book's name.\n");
    scanf("%hd", &option);
    getchar();

    switch (option)
    {
    case 1:
        printf("Type the author's name: ");

        fgets(found, S, stdin);

        set_null_char(found);

        for (size_t i = 0; i < MAX_LIBRARY; i++)
        {
            for (size_t j = 0; j < MAX_BOOKS; j++)
            {
                if (strcmp(found, library[i].book[j].author) == 0)
                {
                    printf("The book is inside the library %s; and the name of the book is %s.\n",
                           library[i].library_name, library[i].book[j].book_name);
                }
            }
        }

        break;

    case 2:
        printf("Type the book's name:");
        fgets(found, S, stdin);
        set_null_char(found);

        for (size_t i = 0; i < MAX_LIBRARY; i++)
        {
            for (size_t j = 0; j < MAX_BOOKS; j++)
            {
                if (strcmp(found, library[i].book[j].book_name) == 0)
                {
                    printf("The book is inside the library %s; and the author is %s.\n",
                           library[i].library_name, library[i].book[j].author);
                    
                    break;
                }
            }
        }

        break;

    default:
        printf("Please, verifacte that you typed a valid option.\n");
        break;
    }
}