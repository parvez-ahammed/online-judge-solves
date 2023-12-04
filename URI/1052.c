//Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in english, with the first letter in uppercase.

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if (num==1)
        printf("January\n");
    else if (num==2)
        printf("February\n");
    else if (num==3)
        printf("March\n");
    else if (num==4)
        printf("April\n");
    else if (num==5)
        printf("May\n");
    else if (num==6)
        printf("June\n");
    else if (num==7)
        printf("July\n");
    else if (num==8)
        printf("August\n");
    else if (num==9)
        printf("September\n");
    else if (num==10)
        printf("October\n");
    else if (num==11)
        printf("November\n");
    else if (num==12)
        printf("December\n");

    return 0;
}
