
//Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

#include<stdio.h>
int main()
{
    int arr[5];
    int i,count=0;
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i++)
        if(arr[i]%2==0)
                count++;    
    
    printf("%d valores pares\n",count);
        
    return 0;
        
}