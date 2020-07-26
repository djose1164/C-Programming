#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    putchar(EOF);

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    
    return 0;
}
