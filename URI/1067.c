//Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

#include <stdio.h>
int main ()
{
    int X,i;
    scanf("%d",&X);
    for (i=1;i<=X;i++)
        if(i%2!=0)
            printf("%d\n",i);
    return 0;

}