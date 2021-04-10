/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Puntuable No. 1.                              */
/*  Fecha: 7/4/2021                                         */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

void sl(int list[], int left_limit, int right_limit)
{

    int left, right, temp, middle;

    left = left_limit;

    right = right_limit;

    middle = list[(left + right) / 2];

    do
    {

        while (list[left] < middle && left < right_limit)
            left++;

        while (middle < list[right] && right > left_limit)
            right--;

        if (left <= right)
        {
            temp = list[left];

            list[left] = list[right];

            list[right] = temp;

            left++;

            right--;
        }

    } while (left <= right);

    if (left_limit < right)
        sl(list, left_limit, right);

    if (right_limit > left)
        sl(list, left, right_limit);
}

void short_list(int list[], int n)

{
    sl(list, 0, n - 1);
}

int main(int argc, const char *argv[])
{

    int list[] = {
        100, 56, 0, 12, 1, 71, 45, 2, 46, 5, 9, 6, 67, 23};
    int size = sizeof(list) / sizeof(int);

    printf("list: ");

    for (int i = 0; i < size; i++)
    {

        printf("%d", list[i]);
        if (i < size - 1)
            printf(",");
    }

    printf("\n");

    short_list(list, size);

    printf("Ordenado: ");

    for (int i = size; i > 0; i--)
    {
        if (list[i] % 2 != 0)
        {
            printf("%d", list[i]);

            if (0 < i - 1)
            {
                printf(",");
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (list[i] % 2 == 0)
        {
            printf("%d", list[i]);

            if (i < size - 1)
            {
                printf(",");
            }
        }
    }

    printf("\n");
    return 0;
}
