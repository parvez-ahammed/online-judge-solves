#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);
    rep(0, n) cin >> v[i];
    map<string, int> mp;

    rep(0, n)
    {
        string ans = (mp.count(v[i]) > 0 ? "YES" : "NO");

        cout << ans << endl;
        mp[v[i]]++;
    }

    return 0;
}