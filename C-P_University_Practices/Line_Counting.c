/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Line Couting                                  */
/*  Fecha: 27/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Count Line; 1st version.
int main(int argc, const char *argv[])
{
    int nl = 0, c;

    for (size_t i = 0; (c = getchar()) != EOF; i++)
    {
        if (c == '\n')
        {
            nl++;
        }
    }

    printf("The total line counted is: %d", nl);
    
}