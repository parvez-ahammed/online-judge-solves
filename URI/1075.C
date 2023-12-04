//Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
#include <stdio.h>
int main ()
{
    int n,i;

    scanf("%d",&n);
    for (i=0;i<10000;i++)
        {
            if(i%n==0)
                printf("%d\n",i+2);
        }
    return 0;
}