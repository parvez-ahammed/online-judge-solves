//Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

#include <stdio.h>
#include <math.h>
int main ()
{
    double x1,y1,x2,y2,dis;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);

    dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.4lf\n",dis);
    return 0;
}