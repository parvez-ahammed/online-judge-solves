#include<stdio.h>
int main ()
{
    int i,j=0,tc;
    scanf("%d",&tc);
    int arr[tc];

    for(i=0;i<tc;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<tc;i++)
        {
            if(arr[i]<arr[i+1] )
                j=1;
            else
            {
                break;
            }

            }
    if(j)
        printf("Yes");
    else 
        printf("N0");
}