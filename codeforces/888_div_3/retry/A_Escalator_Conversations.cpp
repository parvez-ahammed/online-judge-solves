#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k, h;

    cin >> n >> m >> k >> h;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            for (int l = 1; l <= n; l++)
            {
                if (abs(h - v[l]) == (abs(i - j) * k))
                {
                    v[l] = INT_MIN;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}