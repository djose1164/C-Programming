/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Exercise 1-9.                                 */
/*  Fecha: 30/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char _char;
    short counter = 0;

    for (size_t i = 0; (_char = getchar()) != EOF; i++)
    {
        if (_char  == ' ')
        {
            counter++;
        }
        
        if (counter != 0 && _char != ' ')
        {
            counter = 0;
            putchar(' ');
        }

        if (counter == 0)
        {
            printf("%c", _char);
        }
    }

    return EXIT_SUCCESS;
}