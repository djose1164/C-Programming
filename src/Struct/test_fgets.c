#include <stdio.h>

#define MAX 100 

int main(int argc, char const *argv[])
{
    char string[20];
    char for_number[MAX];
    int number;
    printf("Holaaa ");
    fgets(string, 20, stdin);
    fflush(stdin);

    for (size_t i = 0; i < 20; i++)
    {
        printf("%c", string[i]);
    }

    printf("Type the number her: ");
    fgets(for_number, MAX, stdin);
    sscanf(for_number, "%d", &number);
    printf(
        "Your number is: %d\n", number
    );

    char string2[30];
    printf("string2: ");
    fgets(string2, 30, stdin);
    fflush(stdin);  

    for (size_t i = 0; i < 30; i++)
    {
        printf("%c", string2[i]);
    }

    return 0;
}
