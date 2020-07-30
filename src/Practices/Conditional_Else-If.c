/* Program to say days of the week by number with the keyboard. */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number correspond with a day of the week.\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your day is Monday.\n");
    }
    else if (num == 2)
    {
        printf("Your day is Tuesday.\n");
    }
    else if (num == 3)
    {
        printf("Your day is Wednesday.\n");
    }
    else if (num == 4)
    {
        printf("Your day is Thursday.\n");
    }
    else if (num == 5)
    {
        printf("Friday.\n");
    }
    else if (num == 6)
    {
        printf("Your day is Saturday.\n");
    }
    else if (num == 7)
    {
        printf("Your day is Sunday.\n");
    }
    else
    {
        printf("The data introduced is incorrect.\n");
    }
    

    system("pause");
    return 0;
}
