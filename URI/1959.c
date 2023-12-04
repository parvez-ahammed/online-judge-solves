#include <stdio.h>
int main ()
{
    long long N,L;
    scanf ("%lld %lld",&N,&L);
     

    if ( 3 <= N && N <= 1000000  && 1<= L  && L <= 4000)
        printf ("%lld\n",N*L);
    return 0;
}