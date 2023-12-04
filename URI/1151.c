
#include<stdio.h>
int isFibo(int);
int main()
{
    int i,n;
        scanf("%d",&n);

   for(i=0;i<n;i++) 
    {
       printf("%d ",isFibo(i)); 
    }

    return 0;
}

int isFibo(int n) 
{
    if(n==1 || n==0)
        return n;
    else
        return (isFibo(n-1)+isFibo(n-2)); 
}