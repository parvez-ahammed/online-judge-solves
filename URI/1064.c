#include<stdio.h>
int main()
{
    float arr[6],sum=0,aver;
    int i,count=0;
    for(i=0;i<6;i++)
        scanf("%f",&arr[i]);

    for(i=0;i<6;i++)
    {
        if(arr[i]>0)
        {
            count++;
            sum+=arr[i];
        }
                
    }
    
            
    aver=sum/count;
    
    printf("%d valores positivos\n%.1f\n",count,aver);
        
    return 0;
        
}