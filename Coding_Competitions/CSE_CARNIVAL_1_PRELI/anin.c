
#include <stdio.h>

#include <string.h>


void functionName()
{

}

int main()

{
    // int a = 0, b = 1, c = 0, sum = 0, n;
    // int n;
    // printf("Enter the value of n");
    // scanf("%d", &n);

    // while (c <= n)
    // {
    //     c = a + b;
    //     a = b;
    //     b = c;
    //     printf(" %d", a);

    //     sum = sum + a;
    // }

  



    int a = 1, n = 30;
    int counter = 0;
    int sum = 0;

    for (int i = a; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
            counter += 1;
            sum += i;
        }
    }
    printf("\nCOUNTER VALUE %d", counter);
    printf("\nTOTAL VALUE %d", sum);

    return 0;

    // Using while loop
    // for (int c = 0; c <= n;)
    // {
    //     c = a + b;
    //     a = b;
    //     b = c;
    //     printf(" %d", a);
    //     sum = sum + a;
    // }
    // printf("\nsum %d", sum);
}