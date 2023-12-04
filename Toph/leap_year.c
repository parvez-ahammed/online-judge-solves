#include<stdio.h>
int main()
{
   int year, ly;
   scanf("%d",&year);

   ly=((year%4==0)&&((year%400==0)||(year%100!=0)));

   switch(ly)
   {
   case 1:
     printf("YES");
     break;
    
   case 0:
     printf("NO");
     break;
   }
   return 0;
}