#include <stdio.h>

int main ()
{
    double ans = 0.0 , mat[12][12];
    char op;
    int p = 11;
    scanf ("%c",&op);

    for (int x = 0; x <= 11; x++)
        for (int y = 0; y <= 11; y++)
            scanf("%lf", &mat[x][y]);

    for (int z = 1; z <= 11; z++) {
        for (int C = 11; C >= p; C--)
            ans += mat[z][C];
        p--;
    }
    
    if      (op == 's') printf ("%.1lf\n",ans);
    else if (op == 'M') printf ("%.1lf\n",ans/66.0);

    return 0;

}