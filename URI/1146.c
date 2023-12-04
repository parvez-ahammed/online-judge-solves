#include <stdio.h>
 
int main() {
    int x,i;
    while (scanf("%d", &x) && x > 0)
    
    {

        for (i = 1 ; i < x; i++)
         {
            printf("%d ", i);  
        }
        printf("%d\n",x);

    }
    return 0;
}