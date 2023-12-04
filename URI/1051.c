/*Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.



Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.*/

#include <stdio.h>
int main ()
{
    float sal,tax1,tax2,tax3;

    scanf("%f",&sal);

    if (sal>=0 && sal <=2000)
        printf("Isento\n");

    else if (sal>2000 && sal <=3000)
        printf("R$ %.2f\n",((sal-2000.0)*.08));
    else if (sal>3000 && sal <=4500)

        {   
            tax2=(sal-3000)*.18;
            tax1=(sal-(sal-3000+2000))*.08;
            printf("R$ %.2f\n",tax1+tax2);
        }
        
    else if (sal>4500 )

    {   
        tax3=(sal-4500)*.28;
        tax2=(sal-(sal-4500+3000))*.18;
        tax1=(sal-(sal-4500+3500))*.08;
        printf("R$ %.2f\n",tax1+tax2+tax3);
    }
    return 0;
}