/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.*/

#include <stdio.h>
 
int main() {
    char name[50];
    double A, B;
    scanf("%s", &name);
    scanf("%lf", &A);
    scanf("%lf", &B);
    printf("TOTAL = R$ %.2lf\n", A+(B*0.15));
    return 0;
}