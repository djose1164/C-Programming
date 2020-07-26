#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int array[5];
    int count = 1;
    
    for (size_t i = 0; i < 5; i++)
    {
        printf("Type number %d: ", count);
        scanf("%d", &array[i]);
        count++;
    }
    
    for (size_t j = 0; j < 5; j++)
    {
        printf("%d ", array[j]);
    }

    return 0;
}
