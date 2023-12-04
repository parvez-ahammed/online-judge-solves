//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
#include <stdio.h>
int main ()
{   
    int a,b,c,max;

    scanf("%d%d%d",&a,&b,&c);

    max=((a>b && a>c)? a : b>c ? b :c);

    printf("%d eh o maior\n",max);
    return 0;
}