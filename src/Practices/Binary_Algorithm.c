#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main(int argc, char const *argv[])
{
    
    int arrayInt[] = {
        5, 8, 0, 343, 234, 0, -89, -952
    };

    int searchValue = -89;
    int aux = 0;
    int pointer1, pointer2, pointerM, found;
    found = 0;
    pointer1 = 1;
    pointer2 = LENGTH(arrayInt);

    for (size_t i = 0; i < LENGTH(arrayInt); i++)
    {
        for (size_t j = i; j < LENGTH(arrayInt); j++)
        {
            if (arrayInt[i] > arrayInt[j]) {
                aux = arrayInt[i];
                arrayInt[i] = arrayInt[j];
                arrayInt[j] = aux;
            }

        }
        
    }

    for (int k = 0; k < LENGTH(arrayInt); k++)
    {
        pointerM = floor((pointer1 + pointer2) / 2) - 1;
        
        if (searchValue == arrayInt[pointerM])
        {
            found = arrayInt[pointerM];
            printf("Done! Your number is: %d\n", arrayInt[pointerM]);
            break;
        } 
        else if (searchValue > arrayInt[pointerM])
        {
            pointer1++;
        } 
        else if (searchValue < arrayInt[pointerM])
        {
            pointer2--;
        } 
    }


    if (found == 0)
    {
        printf("Value don't found!");
    }
    
    printf("\n*-*-*-*-*-*-*Print arrayInt*-*-*-*-*-*-*-*-*\n");

    for (size_t l = 0; l < LENGTH(arrayInt); l++)
    {
        printf("%d\n", arrayInt[l]);
    }

    if (1 == 2)
    {
        printf("1 is equal to 2\n");
    }
    else if (2 > 10)
    {
        printf("2 is greater than 10\n");
    }
    else
    {
        printf("Incorrect!\n");
    }
    
    
    
    return 0;
}
