// A dynamicArray counter to count how many times a digit
// is repeated.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH(x) (sizeof(x) / sizeof(x[0]))

void fill_array(int array[], int max, const int range);

int main(int argc, char const *argv[])
{
    const int MAX_RANGE = 3;
    int array[100];
    int *counter;
    int temp = 0;

    counter = calloc(MAX_RANGE, sizeof(int));

    if (!counter)
    {
        fprintf(stderr, "Memory couldn't be allocated.\n");
        return EXIT_FAILURE;
    }

    fill_array(array, LENGTH(array), MAX_RANGE);

    for (size_t i = 0; i < LENGTH(array); i++)
    {
        temp = array[i];
        *(counter + temp) += 1;
    }

    for (size_t i = 0; i < MAX_RANGE; i++)
    {
        printf("%d\t", *(counter + i));
    }

    putchar('\n');

    free(counter);

    return EXIT_SUCCESS;
}

/**
 * @brief Fill the array with random numbers.
 * 
 * @param array The pointer to the array that will be filled.
 * @param max The total length of the array.
 * @param range The range for random numbers, i.e range = 5, the numbers will be between 
 * {0, 1, 2, 3, 4}.
 */
void fill_array(int array[], int max, const int range)
{
    time_t t;
    srand((unsigned)time(&t));

    for (size_t i = 0; i < max; i++)
    {
        *(array + i) = rand() % range;
    }

    return;
}