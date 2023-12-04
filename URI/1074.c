/*Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.*/
#include <stdio.h>
int main ()
{
    int size,i;
    scanf("%d",&size);
    int num[size];
    for(i=0;i<size;i++)
        scanf("%d",&num[i]);

    for (i=0;i<size;i++)
        {
            if(num[i]%2 == 0 && num[i]>0)
                printf("EVEN POSITIVE\n");
            else if(num[i]%2 != 0 && num[i]>0)
                printf("ODD POSITIVE\n");
            else if(num[i]%2 != 0 && num[i]<0)
                printf("ODD NEGATIVE\n");
            else if(num[i]%2 == 0 && num[i]<0)
                printf("EVEN NEGATIVE\n");
            else if(num[i]==0)
                printf("NULL\n");
        }

    return 0;
}