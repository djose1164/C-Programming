#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int result = 0;
    calculate(&result);
    printf("Your result is after having done the operation with pointer is: %d", result);
    return 0;
}

void calculate(int *result) {
    int num = *result;
    num = 8 * (5 + 6) - (-5) + 2;
    *result = num;
}