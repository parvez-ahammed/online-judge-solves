/*Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.

Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$ */

#include <stdio.h>
int main()
{
    int A,B;
    float C;
         scanf("%d %d %f",&A,&B,&C);
         printf("NUMBER = %d\n",A);
         printf("SALARY = U$ %.2f\n",B*C);
return 0;
 }