#include <stdio.h>
int main()
{
    int i = 1;
    while (i++ <= 1)
        ;
    while (i++ <= 2)
        ;
        printf("i = %d\n", i);

    return 0;
}
