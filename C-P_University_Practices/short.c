#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15

void odd(int arr[])
{
    unsigned counter = 0, temp;
    for (size_t i = 0; i < MAX; i++)
    {
        if (arr[i] % 2 != 0)
            counter++;
    }

    int odd_list[counter];
    unsigned cuenta = 0;
    for (size_t i = 0; i < MAX; i++)
    {
        if ((arr[i] % 2) != 0)
        {
            odd_list[cuenta] = arr[i];
            cuenta++;
        }
    }

    for (size_t i = 0; i < counter; i++)
    {
        for (size_t j = 0; j < counter - 1; j++)
        {
            if (odd_list[j] > odd_list[j + 1])
            {
                temp = odd_list[j];
                odd_list[j] = odd_list[j + 1];
                odd_list[j + 1] = temp;
            }
        }
    }

    for (size_t i = 0; i < counter; i++)
    {
        printf("%d ", odd_list[i]);
    }
}

void even(int arr[])
{
    unsigned counter, temp;
    for (size_t i = 0; i < MAX; i++)
    {
        if (arr[i] % 2 == 0)
            counter++;
    }

    int even_list[counter];
    unsigned cuenta = 0;

    for (size_t i = 0; i < MAX; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_list[cuenta] = arr[i];
            cuenta++;
        }
    }

    for (size_t i = 0; i < counter; i++)
    {
        for (size_t j = 0; j < counter - 1; j++)
        {
            if (even_list[j] < even_list[j + 1])
            {
                temp = even_list[j];
                even_list[j] = even_list[j + 1];
                even_list[j + 1] = temp;
            }
        }
    }

    for (size_t i = 0; i < counter; i++)
    {
        printf("%d ", even_list[i]);
    }
}

void _short(int arr[])
{
    system("cls||clear");
    fflush(stdout);
    even(arr);
    odd(arr);
}

int main(int argc, const char *argv[])
{
    srand(time(0));
    int nums[MAX];

    for (size_t i = 0; i < MAX; i++)
    {
        nums[i] = 1 + rand() % 50;
    }

    _short(nums);

    return 0;
}