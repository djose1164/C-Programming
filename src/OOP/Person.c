#include "Person.h"
#include <stdlib.h>
#include <stdio.h>

static struct Person *self;

void set_address(char *const address)
{
    self->address = address;
}

char *get_address()
{
    return self->address;
}

void set_name(char *const name)
{
    self->name = name;
}

char *get_name()
{
    return self->name;
}

char *get_profession()
{
    return self->profession;
}

void set_profession(char *const profession)
{
    self->profession = profession;
}

int get_age()
{
    return *self->age;
}

void set_age(int *const age)
{
    self->age = (int *)age;
}

struct Person *__init__(char *name, int const age)
{
    self = malloc(sizeof *self);
    self->name = name;
    self->age = (int *)&age;

    // Setters.
    self->set_address = set_address;
    self->set_profession = set_profession;

    // Getters.
    self->get_address = get_address;
    self->get_name = get_name;
    self->get_age = get_age;
    self->get_profession = get_profession;

    if (!self)
        exit(EXIT_FAILURE);
    else    
        return self;
}