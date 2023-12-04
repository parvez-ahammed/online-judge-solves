//Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.

#include <stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            if(i%2==0)
                printf("%d^2 = %d\n",i,i*i);
        }

    return 0;
}
   
