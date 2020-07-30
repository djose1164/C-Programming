#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int arrayInt[5] = {5, 3, 4, 1, 5};
                        
    size_t length = sizeof(arrayInt) / sizeof(arrayInt[0]);

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", arrayInt[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}

