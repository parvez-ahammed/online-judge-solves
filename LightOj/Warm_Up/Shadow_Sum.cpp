#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    rep(0, n) cin >> v[i];
    map<int, int> mp;

    ll sum = 0;

    for (int i = v.size() - 1; i >= 0; i--)

    {
        if (mp[abs(v[i])] == 0)
        {
            sum += v[i];
            mp[abs(v[i])]++;
        }
    }

    cout << sum << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}