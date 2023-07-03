#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define vi vector<int>

#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    int n, ans = -1;
    cin >> n;
    vi v(n, 0), p(n, 0), s(n, 0);
    map<int, pair<int, int>> mp;

    rep(0, n) cin >> v[i];

    p[0] = v[0];
    s[n - 1] = v[n - 1];

    // storing the values in map
    mp[p[0]].first = 0;
    mp[s[n - 1]].second = n - 1;

    // prefix sum
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + v[i];
        mp[p[i]].first = i;
    }

    // suffix sum
    for (int i = n - 2; i >= 0; i--)
    {
        s[i] = s[i + 1] + v[i];
        mp[s[i]].second = i;
    }


    // checking if for any number if alices indice is less then bobs indice
    rep(0, n)(mp[p[i]].first < mp[p[i]].second) ? ans = p[i] : ans = ans;

    if (ans == -1)
        cout << 0 << endl;
    else
        cout << mp[ans].first + 1 + (n - mp[ans].second) << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}