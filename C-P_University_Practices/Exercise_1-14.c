#include <stdio.h>

/**
*   Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
*  in its input.
*/

int main(int argc, char const *argv[])
{

    /**
     * @brief input: hola como estas
     * h = 1;
     * o = 3;
     * l = 1;
     * a = 2;
     * c = 1;
     * m = 1;
     * e = 1;
     * t = 1;
     * s = 2;
     * 
     * char  alphabet[26][2];
     * 
     * for (size_t i = 0, j = 'a'; i < 26; i++, j++)
     *  alphabet[i][0] = j;
     * 
     * for (size_t i = 0; i < 26; i++)
     *  alphabet[i][1] = 0;
     * 
     * for(i = 0; (c = getchar()) != EOF; ++i)
     * {
     *      if (c == alphabet[i][0])
     *          ++alphabel[i][1];
     * }
     * 
     */

    const unsigned short MAX_ALPHABET = 128;

    short alphabet[MAX_ALPHABET];
    char c;

    for (size_t i = 0; i < MAX_ALPHABET; i++)
    {
        alphabet[i] = 0;
    }

    for (; (c = getchar()) != EOF;)
    {
        alphabet[c] = c + 1;
    }

    for (size_t i = MAX_ALPHABET, k = 0; i >= 1; --i, ++k)
    {
        putchar(k);

        for (size_t j = 0; j < alphabet[k]; ++j)
        {
            if (i < alphabet[k])
                printf("* ");
            else
                putchar(' ');
        }
        putchar(' ');
    }

    putchar('\n');
    return 0;
}
