#include <stdio.h>
#include <stdlib.h>

#define MAX 10
struct Grades
{
    short math, physics, spanish, cad;
};

void set_grades(struct Grades *grades);

void set_grades(struct Grades *grades)
{
    char num[MAX];

    printf("*-*-*-*-*-*-*-*-*-*-*-*-* \
    Inside set_grades function \
    *-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    printf("Type the grade for math: ");
    fgets(num, MAX, stdin);
    sscanf(num, "%hd", &grades->math);

    printf("Type the grade for physics: ");
    fgets(num, MAX, stdin);
    sscanf(num, "%hd", &grades->physics);

    printf("Type the grade for spanish: ");
    fgets(num, MAX, stdin);
    sscanf(num, "%hd", &grades->spanish);

    printf("Type the grade for cad: ");
    fgets(num, MAX, stdin);
    sscanf(num, "%hd", &grades->cad);
}

int main(int argc, char const *argv[])
{
    struct Grades grades;
    char num[MAX];

    set_grades(&grades);

    printf("*-*-*-*-*-*-*-*-*-*-*-*-* \
    Inside main function \
    *-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    printf("The grade of math is %hu\n", grades.math);
    printf("The grade of physics is %hu\n", grades.physics);
    printf("The grade of spanish is %hu\n", grades.spanish);
    printf("The grade of cad is %hu\n", grades.cad);

    return EXIT_SUCCESS;
}