//Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

#include<stdio.h>
int main()
{
    float arr[6];
    int i,count=0;
    for(i=0;i<6;i++)
        scanf("%f",&arr[i]);

    for(i=0;i<6;i++)
    
            if(arr[i]>0)
                count++;

    
    printf("%d valores positivos\n",count);
        
    return 0;
        
}