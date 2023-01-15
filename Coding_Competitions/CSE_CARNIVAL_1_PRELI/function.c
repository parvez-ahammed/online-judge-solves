
#include <stdio.h>

#include <string.h>

int greetAnin(int from , int to)
{
    // printf("\nHELLO ANIN HOW ARE YOU?\n");

    
    int counter = 0;
    int sum = 0;

    for (int i = from; i <= to; i++)
    {
         printf(" %d", i);
        // if (i % 2 == 0)
        // {
           
        //     counter += 1;
        //     sum += i;
        // }
    }
    printf("\nCOUNTER VALUE IN GREET ANIN %d", counter);
    // printf("\nTOTAL VALUE IN GREET ANIN %d", sum);

    return sum;
}

int main()

{


    int sum_main = greetAnin('a','z');

    printf("\nTOTAL VALUE IN MAIN %d", sum_main);

    return 0;
}