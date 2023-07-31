#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 5);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    map<int, int> mp;
    int point = -1;

    for (int i = n; i >= 1; i--)
    {
        if (mp.count(v[i]) == 0)
            mp[v[i]]++;

        else
        {
            point = i;
            break;
        }
    }

    (point == -1) ? cout << 0 << endl : cout << point << endl;
}
int32_t main()
{

    FAST

        int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}