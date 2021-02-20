// Create a function to create two dynamic matrix
// another function to add values to them
// and another one to compare them.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **allocate_memory(int rows, int columns);
void fill_matrix(int **matrix, int rows, int columns);
int compare(int **a, int **b, int x, int y);

int main(int argc, char const *argv[])
{
    int rows, columns;
    int **matrix, **matrix2;

    do
    {
        printf("Enter the number of rows and columns: ");
        scanf("%d %d", &rows, &columns);
    } while (rows < 1 || columns < 1);

    matrix = allocate_memory(rows, columns);
    matrix2 = allocate_memory(rows, columns);

    fill_matrix(matrix, rows, columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        putchar('\n');
    }

    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    fill_matrix(matrix2, rows, columns);

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }

        putchar('\n');
    }

    if (compare(matrix, matrix2, rows, columns))
    {
        printf("The matrixs are equal.\n");
    }
    else
    {
        printf("The matrixs are not equal.\n");
    }

    free(matrix);
    free(matrix2);

    return EXIT_SUCCESS;
}

int **allocate_memory(int rows, int columns)
{
    int **temp = malloc(rows * sizeof(int));
    for (size_t i = 0; i < rows; i++)
    {
        temp[i] = malloc(columns * sizeof(int));

        if (!temp[i])
        {
            fprintf(stderr, "Memory couldn't be allocated.\n");
            exit(EXIT_FAILURE);
        }
    }

    return temp;
}

void fill_matrix(int **matrix, int rows, int columns)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);

    /* using nano-seconds instead of seconds */
    srand((time_t)ts.tv_nsec);

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % 3;
        }
    }
}

int compare(int **a, int **b, int x, int y)
{

    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            if (a[i][j] != b[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}