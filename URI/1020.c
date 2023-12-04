/*Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning*/
#include <stdio.h>
int main ()
{
    int N,year,month,day;
    scanf("%d",&N);
    year=N/365;
    month=(N-(year*365))/30;
    day=(N-(year*365)-(month*30));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}