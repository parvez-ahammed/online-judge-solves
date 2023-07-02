#include <bits/stdc++.h>
#define valid(nx, ny) nx >= 0 && nx < n &&ny >= 0 && ny < m
using namespace std;

int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int x, y;
    bool token = true;
    cin >> x >> y;
    for (int i = 0; i < 8; i++)
    {
        int nx = x - 1 + fx[i];
        int ny = y - 1 + fy[i];
        if (valid(nx, ny) && a[nx][ny] != 'x')
        {
            token = false;
            break;
        }
    }
    if (token)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}
