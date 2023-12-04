#include <stdio.h>
int main ()

{
    int i ;
    double arr[100];
    scanf ("%lf",&arr[0]);
    printf("N[0] = %.4lf\n",arr[0]);

        for (i=1;i<100 ;i++)
            {
                arr[i]=arr[i-1]/2;
                printf("N[%d] = %.4lf\n",i,arr[i]);    
            }
            return 0;
}