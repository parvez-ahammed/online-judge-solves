/*Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.*/
#include <stdio.h>
int main ()
{
    int A,B,C,min,mid,max;

    scanf("%d%d%d",&A,&B,&C);

    max=(A>B && A>C) ? A : B>C ? B:C;
    min=(A<B && A<C) ? A : B<C ? B:C;
    mid= (max!=A && min!=A) ? A : (max!=B && min!=B) ? B : C ;
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",min,mid,max,A,B,C);


    return 0;
}