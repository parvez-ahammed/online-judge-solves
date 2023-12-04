#include <stdio.h>
long long main ()
{
    long long num,fac=1,i;
    scanf("%ld",&num);

    for(i=1;i<=num;i++)
        {
            fac*=i;
            printf("%ld ! is %ld\n",i,fac);
        }
}



