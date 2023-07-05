#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int a[200][200], b[200][200];
int n, m;
void sum(int r, int c)
{

    if (r == n)
    {
        return;
    }
    else if (c == m)
    {
        cout << endl;
        sum(r + 1, 0);
    }
    else
    {
        cout << a[r][c] + b[r][c] << " ";
        sum(r, c + 1);
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    rep(0, n)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    rep(0, n)
    {
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    }
    sum(0, 0);

    return 0;
}