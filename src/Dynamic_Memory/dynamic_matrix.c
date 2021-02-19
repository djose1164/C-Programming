// Create 2 dynamic matrix, asking for columns and rows by keyboard.
// The second matrix has to be a copy of the first matrix.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **matrix, **matrix2;
    int rows, columns;

    do
    {
        printf("Enter the numbers of rows: ");
        scanf("%d", &rows);

        printf("Enter the numbers of columns: ");
        scanf("%d", &columns);
    } 
    while (rows < 1 || columns < 1);

    // Creation of the first matrix.
    matrix = malloc(rows * sizeof(int));
    for (size_t i = 0; i < rows; i++)
    {
        matrix[i] = malloc(columns * sizeof(int));

        // Verifaction of memory.
        if (!matrix[i])
        {
            fprintf(stderr, "Memory couldn't be allocated.\n");
            return EXIT_FAILURE;
        }
    }

    for (size_t i = 0; i < rows; i++)
    {
        // Input the data.
        for (size_t j = 0; j < columns; j++)
        {
            printf("Enter the numbers for the frist matrix at position[%zu, %zu]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Creation of the second matrix.
    matrix2 = malloc(rows * sizeof(int));
    for (size_t i = 0; i < rows; i++)
    {
        matrix2[i] = malloc(columns * sizeof(int));

        // Verifaction of memory.
        if (!matrix2[i])
        {
            fprintf(stderr, "Memory couldn't be allocated.\n");
            return EXIT_FAILURE;
        }
    }

    // Making the copy from matrix to matrix2.
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            matrix2[i][j] = matrix[i][j];
        }
    }

    // Reading matrix2
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            printf("%d ", matrix2[i][j]);
        }

        printf("\n");
    }

    // Freeing up memory space.
    free(matrix);
    free(matrix2);

    return EXIT_SUCCESS;
}
