#include <stdio.h>

int main ()
{
    float s=1,i,j;
    for (i=3,j=2;i<=39;i+=2,j*=2)
        {
            s += i/j; 
        }

        printf("%.2f\n",s);
        return 0;
}