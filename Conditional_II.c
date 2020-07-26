/* Make a program that compare 3 numbers and this program should say the biggest number and the smallest number. With the fewest passible
conditionals */

#include <stdio.h>

int main()
{
    int number_one, number_two, number_three;
    int max, min;

    printf("Enter your first number here: ");
    scanf("%d", &number_one);

    printf("Enter your second number here: ");
    scanf("%d", &number_two);

    printf("Enter your third number here: ");
    scanf("%d", &number_three);

    if (number_one > number_two)
    {
        if (number_one > number_three)
        {
            max = number_one;
        }
        else
        {
            max = number_three;
        }
    }
    else
    {
        if (number_two > number_three)
        {
            max = number_two;
        }
        else
        {
            max = number_three;
        }
    }

    printf("The biggest number is %d.\n", max);

    if (number_one < number_two && number_two < number_three)
    {
        printf("The number one is smallest\n");
    }
    else
    {
        if (number_two < number_three)
        {
            printf("The number two is smallest\n");
        }
        else
        {
            printf("The number three is smallest\n");
        }
    }

    system("pause");
    return 0;
}



