#include <stdio.h>

int main(){

    printf("Variables\n");
    int x;
    float y;
    double y2;
    char z;
    char i[] = "Hello world";

    x = 100;
    y = 50.90;
    y2 = 215454879.59898;
    z = 'H';

    printf("The value of x is: %i.\nThe vaule of y is: %f.\nThe value of y2 is: %f\nThe value of z is: %c.\nThe value of i is: %s\n", 
    x, y, y2, z, i);

    system("pause");
    return 0;
}