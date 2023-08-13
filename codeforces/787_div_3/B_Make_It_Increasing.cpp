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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {

        while (v[i] >= v[i + 1] && v[i] != 0)
        {
            v[i] = round(v[i] / 2);
            ans++;
        }
    }
    bool possible = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
            possible = false;
    }

    if (possible)
        cout << ans << endl;
    else
        cout << -1 << endl;

 
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}