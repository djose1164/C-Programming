/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Code challenger No. 1.                        */
/*  Fecha: 3/2/2021                                         */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NORMAL 0
#define BIG 1
#define MAX_SIZE 4

short *fill_requirements();
void result(short *array);

int main(int argc, const char *argv[])
{
    // short *requirements = fill_requirements();
    result(fill_requirements());

    return EXIT_SUCCESS;
}

short *fill_requirements()
{
    static short requirements[MAX_SIZE];
    size_t i;

    for (i = 0; i < MAX_SIZE; i++)
    {
        if (i == 0)
        {
            printf("Type your 1)age, 2)weight, 3)texture(type 0 for normal, and 1 for big), 4)height. Type in this order given.\n");
        }

        printf("Type No. %zu: ", i + 1);
        scanf("%hd", &requirements[i]);
    }

    return requirements;
}

void result(short *array)
{
    short age = array[0], weight = array[1], texture = array[2], height = array[3];

    if (age < 12 && texture == NORMAL)
    {
        if (weight <= 45 && height >= 3)
        {
            printf("Esbelto.\n");
        }
        else if ((weight > 45 && weight < 75) && height >= 3)
        {
            printf("You are fat.\n");
        }
        else
        {
            printf("You are very fat.\n");
        }
    }
    else
    {
        if (age < 16 && age > 12 && texture == NORMAL && height >= 5)
        {
            if (weight <= 45)
            {
                printf("Flaco.\n");
            }
            else if (weight > 55 && weight < 100)
            {
                printf("Esbelto.\n");
            }
            else
            {
                printf("Usted es muy gordo./n");
            }
        }
    }
}