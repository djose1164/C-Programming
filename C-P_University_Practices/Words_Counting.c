/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Count the words.                              */
/*  Fecha: 30/1/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

// Count lines, words, and characters in input
int main(int argc, char const *argv[])
{
    int words, state, c, newline;
    words = state = c = newline = 0;
    size_t i = 0;

    for (i; (c = getchar()) != EOF; i++)
    {
        if (c == '\n')
        {
            newline++;
        }

        if (c == '\n' || c == '\t' || c == ' ')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            words++;
        }
    }

    printf("\nThe total newlines are: %d.\nThe total words are: %d.\nThe total characters are: %zu.\n",
           newline, words, i);
           
    return EXIT_SUCCESS;
}
