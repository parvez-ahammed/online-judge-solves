#include <stdio.h>
 
int main() {
    int x, y, i, min,max, soma;
    while (scanf("%d %d", &x, &y) && x > 0 && y > 0)
    
    {
        soma = 0;

        max = x>y ? x : y ;
        min = x>y ? y : x ;

        for (i = min ; i <= max; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}