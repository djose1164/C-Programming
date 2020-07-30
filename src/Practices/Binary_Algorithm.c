#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    for(size_t i = 0; i < 10; i++) {
        printf("%0:00d\r", i + 1);
        sleep(1);
    }
    return 0;
}
