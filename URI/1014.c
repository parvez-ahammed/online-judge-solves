//Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
#include <stdio.h>
int main ()
{
    int dis;
    float mil,consump;
    scanf("%d%f",&dis,&mil);
    printf("%.3f km/l\n",dis/mil);
    return 0;
}