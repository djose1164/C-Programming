/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Count blanks, tabs, and newlines              */
/*  Fecha: 29/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    short blanks = 0, tabs = 0, newlines = 0;
    short c;

    for (size_t i = 0; (c = getchar()) != EOF; i++)
    {
        if (c == ' ')
        {
            blanks++;
        } else if (c == '\t')
        {
            tabs++;
        } else if (c == '\n')
        {
            newlines++;
        }
    }

    printf("There are %hi blanks space.\nThere are %hi tabs space.\nThere are %hi newlines.\n", blanks, tabs, newlines);
    
    return EXIT_SUCCESS;
}