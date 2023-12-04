/*Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.

Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)
*/
#include <stdio.h>
int main ()
{
    double r;
    
    scanf("%lf",&r);
    printf("VOLUME = %.3lf\n",r*r*r*3.14159*4/3);
    return 0;
}