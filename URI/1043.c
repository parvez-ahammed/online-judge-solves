/*Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:


Perimetro = XX.X


If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:


Area = XX.X*/
#include <stdio.h>
int main ()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);

    if( A+B>C && A+C>B && B+C>A )
        printf("Perimetro = %.1f\n",A+B+C);
    else
        printf("Area = %.1f\n",.5*(A+B)*C);

    return 0;
}