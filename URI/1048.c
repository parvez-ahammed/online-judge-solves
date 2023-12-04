#include <stdio.h>
int main ()
{
    float salary,final;
    int percent;
    scanf("%f",&salary);

    if (salary>=0 && salary <=400)
        {
            final=salary+(salary*.15);
            percent=15;
        }

    else if (salary>400 && salary <=800)
        {
            final=salary+(salary*.12);
            percent=12;
        }
    else if (salary>800 && salary <=1200)
        {
            final=salary+(salary*.10);
            percent=10;
        }
    else if (salary>1200 && salary <=2000)
        {
            final=salary+(salary*.07);
            percent=7;
        }
     else if (salary>2000)
        {
            final=salary+(salary*.04);
            percent=4;
        }


    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",final,final-salary,percent,'%');


    return 0;

}