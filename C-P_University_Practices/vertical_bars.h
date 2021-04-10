// Allows to the user to use draw_vb() to draw vertial bars in the terminal.
// The user has to pass the height and width the bar that needs to be draw.

#include <stdio.h>
#include <string.h>

/**
 * @brief Prints vertical bars. For each vertical bar printed, leave a tab.
 * 
 * @param height The height for each vertial bar.
 * @param width The width for each vertial bar.
 */
void draw_vb(char *world_list, int width)
{
    // printf("Size: %zu\n", strlen(world_list));

    for (size_t i = 0; i < strlen(world_list); i++)
    {
        if (*world_list + i == ' ')
            putchar('\n');
        else
            printf("*");
    }
    putchar('\n');
    // putchar('\t');
}