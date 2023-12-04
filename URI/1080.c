//Read 100 integer numbers. Print the highest read value and the input position.

#include<stdio.h>
int main ()
{
    int num,pos=0,i,max=0;

    for(i=0;i<100;i++)
    {
        scanf("%d",&num);

            if(num>max)
            {
                max=num;
                pos=i;
            }
    }
        printf("%d\n%d\n",max,pos+1);

          return 0;
}

/*

    for(i=0;i<100;i++)
        {
            for(j=i+1;i<100;i++)
                {
                    if(arr[i]<arr[j])
                        {
                            pos=j+1;
                            max=arr[j];
                        }
                }
        }

        printf("%d\n%d\n",max,pos);

        return 0;*/