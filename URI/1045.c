//Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

#include <stdio.h>
 
int main() {
    double a, b, c, inter;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b > a && b > c) {
        inter = a;
        a = b;
        b = inter;
    }
    if (c > a && c > b) {
        inter = a;
        a = c;
        c = inter;
    }
    if (a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (a*a == b*b + c*c)
            printf("TRIANGULO RETANGULO\n");
        else if (a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        else if (a*a < b*b + c*c)
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c || a == c)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

             