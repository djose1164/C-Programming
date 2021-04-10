/***********************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Character Couting                             */
/*  Fecha: 27/1/2021                                        */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

// Count characters in input; 2nd version.
int main(int argc, const char *argv[])
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("The nc's value: %.0f\n", nc);

    return EXIT_SUCCESS;
}