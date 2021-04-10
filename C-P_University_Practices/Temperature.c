/***********************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Tabla de temperatura                          */
/*  Fecha: 22/1/2021                                        */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(int argc, char const *argv[])
{
    float celsius, fahr;
    
    printf("Temperature Table\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3.0f°F\t %6.1f°C\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
    
    return EXIT_SUCCESS;
}

