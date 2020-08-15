#include <stdio.h>
#include <stdlib.h>

#define LENGTH(x) (sizeof(x) / sizeof(x[0]))

int main(int argc, char const *argv[])
{
    int arrayInt[5] = {5, 3, 4, 1, 5};
                        

    for (size_t i = 0; i < LENGTH(arrayInt); i++)
    {
        printf("%d ", arrayInt[i]);
    }

    size_t length = LENGTH(arrayInt);

    printf("\n%d\n", length);
    getchar();
    return 0;
}

