#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, average, i, choise, count;

    printf("How many numbers do you want to calculate the avarage?: ");
    scanf("%d", &choise);
    if (choise >= 2)
    {
        count = 0;
        for (i = 0; i < choise; i++)
        {
            count += 1;
            printf("Enter your number %d: ", count);
            scanf("%d", &num);
            num+=num;
        }
        printf("%d", num);
        average = num / choise;
        printf("Your average is %d.\n", average);
    }
    

    system("pause");
    return 0;
}
