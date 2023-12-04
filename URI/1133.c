#include <stdio.h>
int main ()
{
    int x,y,max,min,i;
    
    scanf("%d%d",&x,&y);

    max = x>y ? x : y ;
    min = x>y ? y : x ;

    for(i=min+1 ; i<max ;i++)
        {
            if(i%5 == 2 || i %5 == 3)
                {
                    printf("%d\n",i);
                }
        }
    return 0;
}