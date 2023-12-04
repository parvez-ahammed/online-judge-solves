#include<stdio.h>
int isFibo(int);

int main()
{
    int n;
        scanf("%d",&n);
        printf("%d\n",isFibo(n)); 
    return 0;
}

int isFibo(int n) 
{
    if(n==1 || n==0) 
        return n;
    else
        return (isFibo(n-1)+isFibo(n-2)); 
}