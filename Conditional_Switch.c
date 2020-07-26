#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number correspond with a month of the year.\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Your month is January.\n");
        break;
    case 2:
        printf("Your month is Fabraury.\n");
        break;
    case 3:
        printf("Your month is March.\n");
        break;
    case 4:
        printf("Your month is April.\n");
        break;
    case 5:
        printf("Your month is May.\n");
        break;
    case 6:
        printf("Your month is June.\n");
        break;
    case 7:
        printf("Your month is July.\n");
        break;
    case 8:
        printf("Your month is August.\n");
        break;
    case 9:
        printf("Your month is September.\n");
        break;
    case 10:
        printf("Your month is October.\n");
        break;
    case 11:
        printf("Your month is November.\n");
        break;
    case 12:
        printf("Your month is December.\n");
        break;

    default:
        printf("The data introduced is incorrect.\n");
    }

    system("pause");
    return 0;
}
