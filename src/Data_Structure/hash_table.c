#include <stdio.h>

#define CAPACITY 50000

unsigned long hast_table(char *str)
{
    unsigned long i;
    for (size_t j = 0; j < str[j]; j++)
    {
        i += str[j];
    }

    return i % CAPACITY;
}

int main(int argc, char const *argv[])
{
    char *str = "Jose Daniel";
    
    printf("%lu", hast_table(str));

    return 0;
}
