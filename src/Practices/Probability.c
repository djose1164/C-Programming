#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int out_var = 0;
extern size_t count = 0;

void event(int *numbers);
void read_array(int *numbers);

int main(int argc, char const *argv[])
{
    out_var = 50;
    int numbers[] = {0, 0, 0, 0, 0, 0};
    count = (sizeof(numbers) / sizeof(numbers[0]));

    event(numbers);
    read_array(numbers);

    printf("The outside var %d printed in main function!\n ", out_var);
    system("pause");
    return 0;
}

void event(int *numbers) {
    srand(time(NULL));
    int rand_num; 

    for (size_t i = 0; i < 10000; i++)
    {
        //rand_num = rand()&6
        rand_num = rand() / ((RAND_MAX + 1u) / 6);

        switch (rand_num)
        {
        case 0:
            *(numbers + rand_num) += 1;
            break;

        case 1:
            *(numbers + rand_num) += 1;
            break;

        case 2:
            *(numbers + rand_num) += 1;
            break;

        case 3:
            *(numbers + rand_num) += 1;
            break;

        case 4:
            *(numbers + rand_num) += 1;
            break;

        case 5:
            *(numbers + rand_num) += 1;
            break; 
        
        default:
            printf("There is an error here!");
            break;
        }
    }

    printf("The outside var %d printed in void function event!\n", out_var);
}

void read_array(int *number) {
    double percentage;
    printf("read_array function\n");

    for (size_t i = 0; i < count; i++)
    {
        percentage = (*(number + i) * 100) / 10000;
        printf("The value in the position %d is %d and its percentage is %1.2lf.\n", i + 1, i, percentage);
    }
    
}

/*
char hola() {
    return "holaa";
}
*/