/*Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.*/

#include <stdio.h>
int main ()
{
    int time,speed ;
    float fuel;
    scanf("%d%d",&time,&speed);

    fuel=(time*speed)/12.0;

    printf("%.3f\n",fuel);
    return 0;
}