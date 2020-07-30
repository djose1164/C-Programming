//Macros
#include <stdio.h>
#include <string.h>
#define Pi 3.14

int main(){
    int number1;
    int number2;
    char choise[5];
    int value; 

    printf("The Pi's value is: %f.\n\n", Pi);

    printf("Enter number one: ");
    scanf("%d", &number1);
    printf("Enter number two: ");
    scanf("%d", &number2);

    printf("Do you want to sum the two numbers? ");
    scanf("%s", &choise);

if (strcmp(choise, "yes") == 0)
{
    value = number1 + number2;
    printf("Your value is %d.\n", value);
}
else
{
    printf("See ya later.\n");
}

    system("pause");
    return 0;
}