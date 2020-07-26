#include <stdio.h>
#include <stdlib.h>

void sort_least(int array[]);
void _print_least(int array[]);
void sort_greatest(int array[]);
void _print_greatest(int array[]);
int main(int argc, char const *argv[])
{
    int arrayInt[10] = {-9, 5, 4, 43, 12, 5, 65, 76, 0, 78};
    int choice;

    printf("What mode do you wanna sort it? |1=Least. 2=Greatest|:  ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Sort by least to greatest: ");
        sort_least(arrayInt);
        _print_least(arrayInt);
        break;
    case 2:
        printf("Sort by greatest to least: ");
        sort_greatest(arrayInt);
        _print_greatest(arrayInt);
        break;

    default:
        printf("Opcion no valid! Try again!");
        sort_greatest(arrayInt);
        _print_greatest(arrayInt);
        break;
    }
    
    return 0;
}

//sort by least
void sort_least(int array[]) {
    int aux;

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = i; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
            
        }
        
    }
    
}

void _print_least(int array[]) {
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",  array[i]);
    }
    
}

//sort by greatest
void sort_greatest(int array[]) {
    int aux;
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = i; j < 10; j++)
        {
            if (array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
            
        }
        
    }
    
}

void _print_greatest(int array[]) {
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    
}