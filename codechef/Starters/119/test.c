#include <stdio.h>

int main()
{
    int i = 200;
    int counter = 0;

    while (i <= 400) {
        if (i % 5 == 0) {
            counter++;
        }
        i++;
    }

    printf("%d", counter);
    return 0;
}