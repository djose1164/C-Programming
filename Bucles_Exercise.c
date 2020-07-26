#include <stdio.h>

int main()
{
    int i, count;
    float num = 0;
    count = 2000;

        for (i = 2; i <= count; i += 2){
            num += i;
        }

        printf("The result is: %d", num);
    
    system("pause");
    return 0;
}
