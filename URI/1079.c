//Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.

#include <stdio.h>
int main ()
{
    int size,i;
    scanf("%d",&size);
    double a,b,c;

    for (i=0;i<size;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}
/*
#include <stdio.h>
 
int main() {
    int n;
    double a, b, c;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", (a*2+b*3+c*5)/10);
    }
    return 0;
}
*/