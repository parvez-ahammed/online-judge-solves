//Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

#include<stdio.h>
int main()
{
    int arr[5],count[5]={0,0},i;
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i++)
    {   
         if(arr[i]%2==0)
                count[0]++;
         else 
            count[1]++;

        if(arr[i]>0)
                count[2]++; 
        else if(arr[i]<0) 
            count[3]++;

    }
          
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count[0],count[1],count[2],count[3]);

        
    return 0;
        
}