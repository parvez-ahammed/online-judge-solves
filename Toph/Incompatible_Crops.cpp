#include <bits/stdc++.h>
using namespace std;

int main()
{

  

    int r, c, i, j, k, ans;

    

    while (cin >> r >> c)
    {
        ans = 0;
        char str[r][c];

        for (i = 1; i <= r; i++)
            for (j = 1; j <= c; j++)
                cin >> str[i][j];

        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                k = 1;

                if (str[i][j] == '*')
                {
                    k = 0;
                    continue;
                }

                if (i + 1 <= r && str[i + 1][j] == '*')
                {
                    k = 0;
                    continue;
                }

                if (i - 1 >= 1 && str[i - 1][j] == '*')
                {
                    k = 0;
                    continue;
                }

                if (j + 1 <= c && str[i][j + 1] == '*')
                {
                    k = 0;
                    continue;
                }

                if (j - 1 >= 1 && str[i][j - 1] == '*')
                {
                    k = 0;
                    continue;
                }

                if (k)
                    ++ans;
            }
        }

        cout << ans;
    }

    return 0;
}
