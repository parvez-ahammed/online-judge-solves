/*Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).*/

#include <stdio.h>
int main ()
{
    float X,Y;
    scanf("%f%f",&X,&Y);

    if (X==0.0 && Y==0.0)
        printf("Origem\n");
    else if (Y==0.0)
        printf("Eixo X\n");
    else if (X==0.0)
        printf("Eixo Y\n");
    else if(X>0 && Y>0)
        printf("Q1\n");
    else if(X<0 && Y>0)
        printf("Q2\n");
    else if(X<0 && Y<0)
        printf("Q3\n");
    else if(X>0 && Y<0)
        printf("Q4\n");
    return 0;
}