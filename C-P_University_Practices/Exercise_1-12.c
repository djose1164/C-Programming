/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Exercise_1-12.                                */
/*  Fecha: 30/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

// Write a program that prints its input one word per line.
int main(int argc, const char *argv[])
{
    char c;

    for (size_t i = 0; (c = getchar()) != EOF; i++)
    {
        if (c == ' ' || c == '\t')
        {
            putchar('\n');
            continue;
        }

        putchar(c);
    }

    return EXIT_SUCCESS;
}
