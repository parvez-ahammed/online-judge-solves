//Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

#include <stdio.h>
int main ()
{
    int X,Y;
    scanf("%d%d",&X,&Y);

    if(X==1)
        printf("Total: R$ %.2f\n",4.00*Y);
    else if(X==2)
        printf("Total: R$ %.2f\n",4.50*Y);
    else if(X==3)
        printf("Total: R$ %.2f\n",5.00*Y);
    else if(X==4)
        printf("Total: R$ %.2f\n",2.00*Y);
    else if(X==5)
        printf("Total: R$ %.2f\n",1.50*Y);
    
    return 0;
}