// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

int main() {

   const int maxInput = 5;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
    //   printf("%d. Enter a number: ", i);
      scanf("%lf", &number);

      if (number < 5.0)
        break;
      
      // go to jump if the user enters a negative number
      
      sum += number;
      printf("Sum = %.2f for\tthe number %.2f\n", sum , number);
   }

//    humaira:
//    average = sum / (i - 1);
//    printf("Sum = %.2f\n", sum);
//    printf("Average = %.2f", average);


   return 0;
}


