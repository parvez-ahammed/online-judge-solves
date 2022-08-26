#include <bits/stdc++.h>
using namespace std;

using ll = long long;
char s[12][12];

int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main()
{

    int r, c, i, j, count = 0, k;
    cin >> r >> c;
    for (i = 1; i <= r; i++)
    {
        cin >> s[i] + 1;  
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (s[i][j] != '*')
            {
                count = 0;
                for (k = 0; k < 8; k++)
                {
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if (s[tx][ty] == '*')
                        count++;
                }
                if (count)
                    s[i][j] = (char)('0' + count);
                else
                    s[i][j] = '.';
            }
        }
    }
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
            cout << s[i][j];
       cout << endl;
    }
    return 0;
}