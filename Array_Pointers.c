#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TIME 3

void write_number(int *array, size_t length);
void read_array(int *array, size_t length);

int main(int argc, char const *argv[])
{
    int array[5];
    size_t length = sizeof(array) / sizeof(array[0]);
    
    write_number(array, length);
    read_array(array, length);

    printf("\n");
    system("pause");
    return 0;
}

void write_number(int *array, size_t length) {
    for (size_t i = 0; i < length; i++)
    {
        printf("Type the number for the position %d: ", i + 1);
        scanf("%d", (array + i));
    }
    
}

void read_array(int *array, size_t length) {
    /**
     * <p>
     * This fuction read the members inner in an array!
     * <p>
     * Adios xd
    */

    for (size_t i = 0; i < length; i++)
    {
        printf("Your number in the position %d is: %d.\r", i + 1, *(array + i));
        sleep(TIME);
    }
    
}