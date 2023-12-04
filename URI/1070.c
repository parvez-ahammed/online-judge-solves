//Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.

#include <stdio.h>
int main ()
{
    int X,i;
    scanf("%d",&X);
    for (i=X;i<=X+11;i++)
        if(i%2!=0)
            printf("%d\n",i);
    return 0;

}