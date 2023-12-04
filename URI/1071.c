//Read two integer values X and Y. Print the sum of all odd values between them.

#include <stdio.h>
int main ()
{
    int X,Y,low,high,sum=0;

    scanf("%d%d",&X,&Y);

    if (X>Y)
    {   
        high=X;
        low=Y+1;
    }    
    else
    {
        high=Y;
        low=X+1;
    }

    for (low;low<high;low++)
        if((low)%2!=0)
            sum+=low;

    printf("%d\n",sum);

    return 0;
}