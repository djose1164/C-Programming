#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_num(int array[], int *max);
void delete_item(int array[], int max);

/**
 * @brief Create random numbers and read them.
 * 
 * @param array The address where save the random numbers.
 * @param max The limit of the array.
 */
void random_num(int array[], int *max)
{
    int _max = *max;

    time_t t;
    srand((unsigned)time(&t));

    for (size_t i = 0; i < _max; i++)
    {
        *(array + i) = rand() % 5;
    }

    for (size_t i = 0; i < _max; i++)
    {
        printf("%d", *(array + i));

        if (i != (_max - 1))
        {
            printf(", ");
        }
        else
        {
            printf(".\n");
        }
    }
}

/**
 * @brief My brain isn't working properly.
 * So we want to delete an item from the array. Isn't easy in C, jajaja.
 * Well, consider this array[5] = {0, 0, 1, 0, 1}. We want to delete the repeated digits,
 * and for that we'll need three loops: i, j, and k. The first two loops is for comparing:
 * if array[i] == array[j] equals to true, then we have to delete the item in the position array[j]
 * and with the third loop k, we need to shift the void position.
 * 
 * @param array A pointer to the array that we want to delete wether the repeated digits or whataver you
 * want to do xD.
 * 
 * @param max The limit of the array to delete.
 */
void delete_item(int array[], int max)
{
    size_t j;

    if (array != NULL)
    {
        for (size_t i = 0; i < max; i++)
        {
            j = i + 1;
            while (j < max)
            {
                if (*(array + i) == *(array + j))
                {
                    for (size_t k = j; (k + 1) <= (max - 1); k++)
                    {
                        *(array + k) = *(array + k + 1);
                    }

                    max--;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    else
    {
        printf("Memory couldn't be allocated.\n");
    }

    array = realloc(array, max * sizeof(int));

    if (array != NULL)
    {
        printf("The array after delete_item function.\n");

        for (size_t i = 0; i < max; i++)
        {
            printf("%d", *(array + i));

            if (i != (max - 1))
            {
                printf(", ");
            }
            else
            {
                printf(".\n");
            }
        }
    }
    else
    {
        printf("Could've not allocate memory.\n");
    }
}

int main(int argc, char const *argv[])
{
    int max = 10;

    int *array = malloc(sizeof(*array) * max);

    random_num(array, &max);

    delete_item(array, max);

    return EXIT_SUCCESS;
}
