/*Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double A,B,C,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);

    R1=(-B+sqrt((B*B)-(4*A*C)))/(2*A);
    R2=(-B-sqrt((B*B)-(4*A*C)))/(2*A);

    if (A==0 || (B*B)-(4*A*C)<0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);

    return 0;
}