#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char arrayString[10];

    printf("Enter a phrase less than 10 character (the space counts)");
    fgets(arrayString, (sizeof(arrayString) / sizeof(arrayString[0]) + 1), stdin);

    changeSuffix(arrayString);
    
    printf("\n%s\n", arrayString);
    return 0;
}

void changeSuffix(char *arrayString) {
    for (size_t i = 0; i < (sizeof(arrayString) / sizeof(arrayString[0])); i++)
    {
        if (arrayString[i] == '\n')
        {
            arrayString[i] = '\0';
        }
        
    }
    
}