#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buffer[3], buf[512];
    int num = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Type data %zu: ", i);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &num);

        printf("The number in the vuelta %zu is: %d\n", i, num);
    }

    printf("What's your name: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = 0;

    printf("Your name is: %s.\n", buf);
    
    return EXIT_SUCCESS;
}
