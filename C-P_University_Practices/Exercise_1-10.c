/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Exercise 1-10.                                */
/*  Fecha: 30/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char _char;
    
    for (size_t i = 0; (_char = getchar()) != EOF; i++)
    {

        if (_char == '\t')
        {
            printf("\\t");
            continue;
        } else if (_char == '\b')
        {
            printf("\\b");
            continue;
        } else if (_char == '\\')
        {
            printf("\\");
            continue;
        }

        printf("%c", _char);
    }
    
    return EXIT_SUCCESS;
}