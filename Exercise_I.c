#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute, seconds;

    printf("Enter the hour: ");
    scanf("%d", &hour);

    printf("Enter the minute: ");
    scanf("%d", &minute);

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    if ((hour > 0) && (hour < 24) && (minute > 0) && (minute < 60) && (seconds > 0) && (seconds < 60))
    {
        seconds ++;
        if (seconds == 60)
        {
            minute ++;
            seconds = 0;
        }
        if (minute == 60)
        {
            hour ++;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 00;
        }

        if ((hour >= 0) && (hour < 10))
        {
            printf("Your time is 0%d ", hour);
        }
        else
        {
            printf("Your time is %d ", hour);
        }
        if ((minute >= 1) && (minute < 10))
        {
            printf(":0%d ", minute, seconds);
        }
        else
        {
            printf(":%d ", minute, seconds);
        }
        if (seconds >= 1 && seconds < 10)
        {
            printf(":0%d \n", seconds);
        }
        else
        {
            printf(":%d \n", seconds);
        }
        
        printf("Your time is %d :%d :%d \n", hour, minute, seconds);
    }
    else
    {
        printf("The introduced hour is incorrect.\n");
    }

    system("pause");
    return 0;
}
