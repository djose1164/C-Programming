#include <stdio.h>
#include <stdlib.h>

void tell_me(char num[]);

void tell_me(char num[])
{
    for (int i = 0; i < sizeof(int); i++)
    {
        if (num[i] == '\n')
        {
            printf("\nHas the newline character.\n");
            num[i] = '\0';
        }
    }
}

int main(int argc, char const *argv[])
{
    int MAX = 0;
    char num[4];
    char c;

    do
    {
        printf("Type the max array's elements: ");
        /**
        * scanf("%d", &MAX);
        * getchar();
        * Works
        */
        fgets(num, sizeof(num), stdin);
        //tell_me(num);
        sscanf(num, "%d", &MAX);

        int *array = malloc(MAX * sizeof(*array));
        if (array == NULL)
        {
            printf("Sorry! The memory couldn't be reserved.\n");
        }
        else
        {
            for (size_t i = 0; i < MAX; i++)
            {
                *(array + i) = i;
            }

            for (size_t i = 0; i < MAX; i++)
            {
                printf("%d", *(array + i));

                if (i != (MAX - 1))
                {
                    printf(", " );
                }
                else
                {
                    printf(".\n");
                }
            }
        }

        fflush(stdout);

        printf("Type Y or y to continue...");
        fgets(num, sizeof(num), stdin);
        sscanf(num, "%c", &c);

    } while (c == 'Y' || c == 'y');

    return EXIT_SUCCESS;
}