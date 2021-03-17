#include "Person.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int age = 18;
    char name[] = "Jose Daniel";

    struct Person *person = __init__(name, age);
    person->set_address("En una calle");
    person->set_profession("Mechatronics student");

    printf("Your name is: %s.\nYour age is: %d.\nYou live in: %s.\nYou are a/an: %s.\n", get_name(), get_age(), get_address(), get_profession());

    return 0;
}
