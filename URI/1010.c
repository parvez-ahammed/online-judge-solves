/*In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.*/



#include <stdio.h>
 
int main() {
	int prod1, am1, prod2, am2;
    float price1, price2, x;
    scanf("%d %d %f", &prod1, &am1, &price1);
    scanf("%d %d %f", &prod2, &am2, &price2);
    x = (am1*price1) + (am2*price2);
    printf("VALOR A PAGAR: R$ %.2f\n",x);
    return 0;
}