/***********************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Input & Output                                */
/*  Fecha: 27/1/2021                                        */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

// Input and Output; 2st version.
int main(int argc, const char *argv[])
{
    short c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
  
    return EXIT_SUCCESS;
}
