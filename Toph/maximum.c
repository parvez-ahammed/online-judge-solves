#include <stdio.h>
int main ()
{
    int i,max,tc;

    scanf("%d",&tc);
    int arr[tc];

    for(i=0;i<tc;i++)
        scanf("%d",&arr[i]);

        max=arr[0];

    for(i=1;i<tc;i++)
        {
            if(max>arr[i])
                max=max;
            else
                max=arr[i];
        }

        printf("%d",max);
        return 0;
}