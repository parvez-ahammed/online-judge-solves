#include <stdio.h>

int isPrime(int);

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        int x;
        scanf("%d", &x);
        if(isPrime(x)) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}

int isPrime(int x)
{
    int i=2,isPrime=1;

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1 && x > 1)
       return 1;
    else
        return 0;
}