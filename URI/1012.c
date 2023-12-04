/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.*/

#include <stdio.h>
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    printf("TRIANGULO: %.3lf\n",.5*a*c);
    printf("CIRCULO: %.3lf\n",3.14159*c*c);
    printf("TRAPEZIO: %.3lf\n",(a+b)*c/2);
    printf("QUADRADO: %.3lf\n",b*b);
    printf("RETANGULO: %.3lf\n",a*b);

    return 0;
    
}