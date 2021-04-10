/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: 1.6 Arrays.                                   */
/*  Fecha: 30/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Count digits, white space, others

int main(int argc, const char *argv[])
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ndigit[c - '0']++;
        } else if (c == ' ' || c == '\n' || c == '\t')
        {
            nwhite++;
        } else
        {
            nother++;
        }
    }

    printf("digits = ");

    for (i = 0; i < 10; i++)
    {
        printf("%d", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);
    
    return EXIT_SUCCESS;
}