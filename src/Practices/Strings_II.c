#include <stdio.h>
#include <string.h>

/**
 * Make a program that does a change with the world that the user type by keyword.
 * That's to say, first we need a paragraph and then when the user insert a word, if that world is in,
 * the paragraph that word musts change with a space. 
*/

void change_world(char world, char paragraph[]);
void read_paragraph(char paragraph[]);

int main(int argc, char const *argv[])
{
    char world;
    char paragraph[] = "Today is a beautiful day for learning C. I wanna be a Mechatronic Engenner and hacker. I can do!"; 

    // Asked for a word to the user.
    printf("Enter a latter: ");
    world = getchar();

    change_world(world, paragraph);

    printf("\n");

    printf("%c", world);

    read_paragraph(paragraph);

    return 0;
}

void change_world(char world, char paragraph[]) {
    int limit = strlen(paragraph);
    for (size_t i = 0; i < limit; i++)
    {
        if (paragraph[i] == world) {
            paragraph[i] = ' ';
        }
    }   
}

void read_paragraph(char paragraph[]) {
    printf("%s\n", paragraph);
}