#include <stdio.h>

int main(){
    int number_1;
    int number_2;

//Number One
    printf("Enter your number: ");
    scanf("%d", &number_1);

    if (number_1 < 0)
    {       
        printf("Impossible work with negative numbers.\n");
    }
    else
    {
        number_2 = number_1 % 2;
        if (number_2 == 0)
        {
            printf("The number is pair\n");
        }
        else
        {
            printf("The number is odd\n");
        }
    }

    system("pause");
    return 0;
}