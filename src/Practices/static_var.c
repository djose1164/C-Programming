#include <stdio.h>
#include <stdlib.h>

int increment(int _num);

int increment(int _num)
{
    int num = 0;
    num = num + _num;

    return num;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", increment(6));
    printf("%d\n", increment(5));
    printf("%d\n", increment(4));

    return EXIT_SUCCESS;
}
