#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[400], b[400];
    int n, m;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[a[i] + b[j]] == 0)
            {
                cout << a[i] << " " << b[j] << '\n';
                return 0;
            }
        }
    }
}