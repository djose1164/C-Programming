/************************************************************/
/*           Programacion para mecatronicos                 */
/*  Nombre: Jose S. Daniel Victoriano Bello                 */
/*  Matricula: 2020-10646                                   */
/*  Seccion: Miercoles                                      */
/*  Practica: Practica 2.                                   */
/*  Fecha: 10/2/2021                                        */
/************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void my_pow(int request);
void is_prime(int num);
void even_number(int num);
void odd_number(int num);

#define MAX_RANGE 50

int main(int argc, const char *argv[])
{
    /* 
    realizar un programa que dado un rango de números 
    Ej; 1 - 100 nos diga cuales numeros son primos, cuáles son pares, 
    cueles son impares y cuantos tienen raíz cuadrada
    */

    //int random;
    time_t t;
    int random;

    srand((unsigned)time(&t));

    printf("Prime\tEven\tOdd\tSquare root\n");

    for (size_t i = 0; i < MAX_RANGE; i++)
    {
        random = rand() % MAX_RANGE;
        if (random > 0)
        {
            is_prime(random);
            even_number(random);
            odd_number(random);
            my_pow(random);
        }
    }
}

void my_pow(int request)
{
    int base;
    bool status = false;

    for (int i = 1; i < MAX_RANGE; i++)
    {
        base = i;
        base *= base;

        if (base == request)
        {
            status = true;
            break;
        }
    }

    if (status)
    {
        printf("%d\t\n", request);
    }
    else
    {
        printf("\t\n");
    }
}

void is_prime(int num)
{
    int prime = 1;
    for (int i = 2; i < MAX_RANGE; i++)
    {
        if ((num % i) == 0)
        {
            prime = 0;
        }
    }

    if (prime)
    {
        printf("%d\t", num);
    }
    else
    {
        printf("\t");
    }
}

void even_number(int num)
{
    // Even numbers
    if ((num % 2) == 0)
    {
        printf("%d\t", num);
    }
    else
    {
        printf("\t");
    }
    
}

void odd_number(int num)
{
    if ((num % 2) != 0)
    {
        printf("%d\t", num);
    }
    else
    {
        printf("\t");
    }
    
}