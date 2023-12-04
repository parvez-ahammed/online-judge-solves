//Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
#include <stdio.h>
int main ()
{
    int N,hour,minute,second;
    scanf("%d",&N);

    hour=N/3600;
    minute=(N-(hour*3600))/60;
    second=(N-(hour*3600)-(minute*60));


    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}