#include <stdio.h>
#include <math.h>

int main(){

    int number1, number2, value;
    number1 = 10;
    number2 = 5;

    value = number1 + number2;
    printf("The sum's value is: %i.\n",value);

    value = number1 - number2;
    printf("The subtraction's value is: %i.\n", value);

    value = number1 / number2;
    printf("The division's value is: %i.\n", value);

    value = number1 * number2;
    printf("The multiplicacion's value is: %i.\n", value);

    value = pow(number1, number2);
    printf("The pow's value is: %i.\n", value);

    value = sqrt(value);
    printf("The square root's value is: %i.\n", value);

    system("pause");
    return 0;

}